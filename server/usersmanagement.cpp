#include "usersmanagement.h"

vector<PersonNode> UsersManagement::PersonsRefInstant;

void UsersManagement::loader()
{
    vector<string> resulte;
    QString query = "SELECT * FROM Accounts;";
    DataBase* db = DataBase::getInstance();
    resulte = db->select(query);

    // creating Person nodes and push back
    PersonNode temp;
    for (int i = 0; i < resulte.size(); i += 8) {
        temp.userId = stoi(resulte[i]);
        temp.email = resulte[i + 1];
        temp.password = resulte[i + 2];
        temp.userName = resulte[i + 3];
        temp.level = stoi(resulte[i + 4]);
        temp.name = resulte[i + 5];
        temp.phone = resulte[i + 6];
        temp.address = resulte[i + 7];
        PersonsRefInstant.push_back(temp);
    }
}

UsersManagement::UsersManagement() {}
int UsersManagement::signup(const string& _email,const string& _password,const string& _username,int inviterID)
{
    // check if email or user name exist
    for (int i = 0; i < PersonsRefInstant.size(); ++i)
    {
        if(PersonsRefInstant[i].email == _email)
        {
            return 2;
        }
        if(PersonsRefInstant[i].userName == _username)
        {
            return 3;
        }
    }

    //validating data ...
    if(!Validators::isValidEmail(_email))
    {
        return 4;
    }
    if(!Validators::isValidUsername(_username))
    {
        return 5;
    }
    if(!Validators::isValidPassword(_password,_username))
    {
        return 6;
    }
    // iserting into database
    string query = "INSERT INTO Accounts (email,password,username,level,name,phone,address) VALUES ('" + _email + "','" + _password + "','" + _username + "','" + to_string(1) + "','null','null','null');";
    QString qqery = query.c_str();
    DataBase * db = DataBase::getInstance();
    if(db->insert(qqery))
    {
        query = "SELECT userId FROM Accounts WHERE username = '" + _username + "';";
        qqery = query.c_str();
        db = DataBase::getInstance();
        vector<string> invitedID = db->select(qqery);
        if(invitedID.size() == 0)
            throw runtime_error("can not find new inserted person");

        if(inviterID != -1)
        {
            query = "INSERT INTO invitation (inviter,invited) VALUES ('" + to_string(inviterID) + "','" + invitedID[0] + "');";
            qqery = query.c_str();
            db = DataBase::getInstance();
            db->insert(qqery);

            // check for level up!!
            query = "SELECT invited FROM invitation WHERE inviter='" + to_string(inviterID) + "';";
            qqery = query.c_str();
            vector<string> allInviteds = db->select(qqery);
            if(allInviteds.size() > 4)
            {
                int i;
                for(i = 0;i < PersonsRefInstant.size();i++)
                {
                    if(PersonsRefInstant[i].userId == inviterID && PersonsRefInstant[i].level != 2)
                    {
                        PersonsRefInstant[i].level = 2;
                        query = "UPDATE Accounts SET level = '2' WHERE userID='" + to_string(PersonsRefInstant[i].userId) + "';";
                        qqery = query.c_str();
                        db->update(qqery);
                        break;
                    }
                }
            }
        }
        // TODO : save these changes in persons vector
        PersonNode p1;
        p1.userId = stoi(invitedID[0]);
        p1.userName = _username;
        p1.email = _email;
        p1.password = _password;
        p1.level = 1;
        PersonsRefInstant.push_back(p1);
        return 1;
    }else
    {
        return 7;
    }

}
bool UsersManagement::signin(string emailOrUsername,string password)
{
    for (int i = 0; i < PersonsRefInstant.size(); ++i)
    {
        if(PersonsRefInstant[i].email == emailOrUsername && PersonsRefInstant[i].password == password)
            return true;
        if(PersonsRefInstant[i].userName == emailOrUsername && PersonsRefInstant[i].password == password)
            return true;
    }
    return false;
}

bool UsersManagement::is_register_by_username(const string& username)
{
    for (int i = 0; i < PersonsRefInstant.size(); ++i) {
        if(PersonsRefInstant[i].userName == username)
        {
            if(PersonsRefInstant[i].name == "null")
            {
                return false;
            }else
            {
                return true;
            }
        }
    }
    return false;
}

bool UsersManagement::is_register_by_email(const string& email)
{
    for (int i = 0; i < PersonsRefInstant.size(); ++i) {
        if(PersonsRefInstant[i].email == email)
        {
            if(PersonsRefInstant[i].name == "null")
            {
                return false;
            }else
            {
                return true;
            }
        }
    }
    return false;
}

int UsersManagement::do_registeration_by_email(const string& email,const string& name,const string& phone,const string& address)
{
    if(name == "null" || phone == "null" || address == "null" || name.size() == 0 || phone.size() == 0 || address.size() == 0)
        return 4;

    int userID = -1;
    for (int i = 0; i < PersonsRefInstant.size(); ++i) {
        if(PersonsRefInstant[i].email == email)
        {
            userID = PersonsRefInstant[i].userId;
            PersonsRefInstant[i].name = name;
            PersonsRefInstant[i].phone = phone;
            PersonsRefInstant[i].address = address;
        }
    }
    if(userID == -1)
    {
        return 2;
    }else
    {
        string query = "UPDATE Accounts SET name='" + name + "' phone='" + phone + "' address='" + address + "' WHERE userID='" + to_string(userID) + "';";
        QString qquery = query.c_str();
        DataBase* db = DataBase::getInstance();
        if(db->update(qquery))
        {
            return 1;
        }else
        {
            return 3;
        }
    }
}

int UsersManagement::do_registeration_by_username(const string& username,const string& name,const string& phone,const string& address)
{
    if(name == "null" || phone == "null" || address == "null" || name.size() == 0 || phone.size() == 0 || address.size() == 0)
        return 4;

    int userID = -1;
    for (int i = 0; i < PersonsRefInstant.size(); ++i) {
        if(PersonsRefInstant[i].userName == username)
        {
            userID = PersonsRefInstant[i].userId;
            PersonsRefInstant[i].name = name;
            PersonsRefInstant[i].phone = phone;
            PersonsRefInstant[i].address = address;
        }
    }
    if(userID == -1)
    {
        return 2;
    }else
    {
        string query = "UPDATE Accounts SET name='" + name + "', phone='" + phone + "', address='" + address + "' WHERE userID=" + to_string(userID) + ";";
        QString qquery = query.c_str();
        DataBase* db = DataBase::getInstance();
        if(db->update(qquery))
        {
            return 1;
        }else
        {
            return 3;
        }
    }
}


bool UsersManagement::forget_password(string email,string username)
{
    for (int i = 0; i < PersonsRefInstant.size(); ++i)
    {
        if(PersonsRefInstant[i].email == email && PersonsRefInstant[i].userName == username)
        {
            return true;
        }
    }
    return false;
}
