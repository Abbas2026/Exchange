#ifndef VALIDATORS_H
#define VALIDATORS_H
#include <string>
using namespace std;
class Validators
{
private:
    Validators();
public:
    static bool isValidPassword(const string& password, const string& username);
    static bool isValidUsername(const string& username);
    static bool isValidFirstName(const string& name);
    static bool isValidLastName(const string& lastName);
    static bool isValidEmail(const string& email);
    static bool isValidPhoneNumber(const string& number);
};

#endif // VALIDATORS_H
