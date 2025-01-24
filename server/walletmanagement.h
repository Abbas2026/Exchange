#ifndef WALLETMANAGEMENT_H
#define WALLETMANAGEMENT_H
#include "wallet.h"
#include <string>

class WalletManagement
{
    WalletManagement();
public:
    static vector<Wallet> WalletRefInstant;
    static void load_all_wallets();

    static int create_new_wallet(int ownerUserID);
    /*
     * it returns IP address of new created wallet
    */
    static int create_new_wallet(string username);
    /*
     * it returns IP address of new created wallet
    */
    static vector<QString> get_user_wallet_IPs(int userID);
    static vector<QString> get_user_wallet_IPs(const string& username);

    static double get_wallet_USD(int walletIP);
    static int usernameTOuserid(string username);
    static vector<QString> get_all_coin(int walletIP);
    // return order USD BTC ETH USDT BNB SOL
};

#endif // WALLETMANAGEMENT_H
