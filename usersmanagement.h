#ifndef USERSMANAGEMENT_H
#define USERSMANAGEMENT_H

#include <vector>
#include <string>
#include <mutex>
#include "validators.h"
#include "database.h"

using namespace std;

class PersonNode;

class UsersManagement
{
private:

    static mutex usrmutex;
    UsersManagement();
public:
    // TODO : creat a loader to load all users from database
    static vector<PersonNode> PersonsRefInstant;
    static void loader();
    static vector<PersonNode> getAllPersons()
    {
        return PersonsRefInstant;
    }

    static int signup(const string& _email,const string& _password,const string& _username,int inviterID=-1);
    /*
     * if successful return 1
     * if email exist return 2
     * if user name exist return 3
     * if email is not valid return 4
     * if user name is not valid return 5
     * if password is not valid return 6
     * if failed insert into datatbase return 7
    */
    static bool signin(string emailOrUsername,string password);
    static bool is_register_by_username(const string& username);
    static bool is_register_by_email(const string& email);

    static int do_registeration_by_email(const string& email,const string& name,const string& phone,const string& address);
    /*
     * return 1 if successful
     * return 2 if email dose not exist
     * return 3 if can not execute update query
     * return 4 if name or phone or address are not valid
     */

    static int do_registeration_by_username(const string& username,const string& name,const string& phone,const string& address);
    /*
     * return 1 if successful
     * return 2 if username dose not exist
     * return 3 if can username dose not exist
     * return 4 if name or phone or address are not valid
     */

    static bool forget_password(string email,string username);

    // TODO : complet these two functions below
    // static int reset_password(string userame,string email,string newPasswprd);
};


class PersonNode
{
public:
    // esential data
    int userId;
    string email;
    string password;
    string userName;

    // supplementary data
    int inviterID;
    int level;
    string name;
    string phone;
    string address;
};

#endif //USERSMANAGEMENT_H
