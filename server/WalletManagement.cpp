#include "walletmanagement.h"
#include "usersmanagement.h"

WalletManagement::WalletManagement() {}

vector<Wallet> WalletManagement::WalletRefInstant;

void WalletManagement::load_all_wallets()
{
    vector<string> resulte;
    QString query = "SELECT * FROM wallet_balance";
    DataBase * db = DataBase::getInstance();
    resulte = db->select(query);

    Wallet temp;
    for (int i = 0; i < resulte.size(); i += 8)
    {
        temp.ownerUserID = stoi(resulte[i]);
        temp.walletIP = stoi(resulte[i + 1]);
        temp.USD_balance = stod(resulte[i + 2]);
        temp.BTC_balance = stod(resulte[i + 3]);
        temp.ETH_balance = stod(resulte[i + 4]);
        temp.USDT_balance = stod(resulte[i + 5]);
        temp.BNB_balance = stod(resulte[i + 6]);
        temp.SOL_balance = stod(resulte[i + 7]);
        WalletRefInstant.push_back(temp);
    }

}

int WalletManagement::create_new_wallet(int ownerUserID)
{
    int newWalletIP = -1;
    string query = "INSERT INTO wallet_balance (owner,USD,BTC,ETH,USDT,BNB,SOL) VALUES (" + to_string(ownerUserID) + ",50.0, 0.0, 0.0, 0.0, 0.0, 0.0)";
    QString qquery = query.c_str();
    DataBase* db = DataBase::getInstance();
    db->insert(qquery);

    query = "SELECT walletIP FROM wallet_balance WHERE owner=" + to_string(ownerUserID) + ";";
    qquery = query.c_str();
    vector<string> selectResult = db->select(qquery);
    qDebug() << selectResult.back();
    newWalletIP = stoi(selectResult[selectResult.size()-1]);

    // push back into WalletRefInstant
    Wallet temp;
    temp.ownerUserID = ownerUserID;
    temp.walletIP = newWalletIP;
    temp.USD_balance = 50.0;
    temp.BTC_balance = 0.0;
    temp.ETH_balance = 0.0;
    temp.USDT_balance = 0.0;
    temp.BNB_balance = 0.0;
    temp.SOL_balance = 0.0;

    WalletRefInstant.push_back(temp);
    return newWalletIP;
}

int WalletManagement::create_new_wallet(string username)
{
    int ownerid;
    for (int i = 0; i <UsersManagement::PersonsRefInstant.size() ; ++i)
    {
        if(username == UsersManagement::PersonsRefInstant[i].userName)
        {
            ownerid = UsersManagement::PersonsRefInstant[i].userId;
            break;
        }
    }
    return create_new_wallet(ownerid);
}

vector<QString> WalletManagement::get_user_wallet_IPs(int userID)
{
    vector<QString> resulte;
    QString temp;
    for (int i = 0; i < WalletRefInstant.size(); ++i)
    {
        if(WalletRefInstant[i].ownerUserID == userID)
        {
            temp = to_string(WalletRefInstant[i].walletIP).c_str();
            resulte.push_back(temp);
        }
    }
    return resulte;
}
vector<QString> WalletManagement::get_user_wallet_IPs(const string& username)
{
    int userID = -1;
    for (int i = 0; i < UsersManagement::PersonsRefInstant.size(); ++i)
    {
        if(username == UsersManagement::PersonsRefInstant[i].userName)
        {
            userID = UsersManagement::PersonsRefInstant[i].userId;
            break;
        }
    }
    return get_user_wallet_IPs(userID);
}

double WalletManagement::get_wallet_USD(int walletIP)
{
    for (int i = 0; i < WalletRefInstant.size(); ++i)
    {
        if(WalletRefInstant[i].walletIP == walletIP)
        {
            return WalletRefInstant[i].USD_balance;
        }
    }
}

int WalletManagement::usernameTOuserid(string username)
{
    int userID = -1;
    for (int i = 0; i < UsersManagement::PersonsRefInstant.size(); ++i)
    {
        if(username == UsersManagement::PersonsRefInstant[i].userName)
        {
            userID = UsersManagement::PersonsRefInstant[i].userId;
            break;
        }
    }
    return userID;
}

vector<QString> WalletManagement::get_all_coin(int walletIP)
{
    QString temp;
    vector<QString> result;
    for (int i = 0; i < WalletRefInstant.size(); ++i)
    {
        if(WalletRefInstant[i].walletIP == walletIP)
        {
            temp = to_string(WalletRefInstant[i].USD_balance).c_str();
            result.push_back(temp);

            temp = to_string(WalletRefInstant[i].BTC_balance).c_str();
            result.push_back(temp);

            temp = to_string(WalletRefInstant[i].ETH_balance).c_str();
            result.push_back(temp);

            temp = to_string(WalletRefInstant[i].USDT_balance).c_str();
            result.push_back(temp);

            temp = to_string(WalletRefInstant[i].BNB_balance).c_str();
            result.push_back(temp);

            temp = to_string(WalletRefInstant[i].SOL_balance).c_str();
            result.push_back(temp);
        }
    }
    return result;
}
