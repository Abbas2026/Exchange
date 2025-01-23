#include "validators.h"

Validators::Validators() {}

using namespace std;

bool Validators::isValidPassword(const string& password, const string& username)
{
    // Check length
    if (password.length() < 6 || password.length() > 20)
    {
        return false;
    }

    // Check for at least one lowercase letter
    bool hasLower = false;
    for (char c : password)
    {
        if (islower(c))
        {
            hasLower = true;
            break;
        }
    }

    // Check for at least one uppercase letter
    bool hasUpper = false;
    for (char c : password)
    {
        if (isupper(c))
        {
            hasUpper = true;
            break;
        }
    }

    // Check for at least one digit
    bool hasDigit = false;
    for (char c : password)
    {
        if (isdigit(c))
        {
            hasDigit = true;
            break;
        }
    }

    // Check for at least one special character
    bool hasSpecial = false;
    for (char c : password)

    {
        if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' ||
            c == '^' || c == '&' || c == '*' || c == '(' || c == ')' ||
            c == '-' || c == '+' || c == '=')

        {
            hasSpecial = true;
            break;
        }
    }

    if (!(hasUpper && hasSpecial && hasDigit && hasLower))

    {
        return false;
    }


    // Check if username parts are not in the password
    size_t pos = username.find_first_of("._@");
    while (pos != string::npos)

    {
        string part = username.substr(0, pos);
        if (password.find(part) != string::npos)

        {
            return false;
        }
        pos = username.find_first_of("._@", pos + 1);
    }

    // Check for repeated characters
    int consecutiveCount = 1;
    for (size_t i = 1; i < password.length(); ++i)
    {
        if (password[i] == password[i - 1])
        {
            consecutiveCount++;
            if (consecutiveCount > 3)
            {

                return false;
            }
        }
        else
        {
            consecutiveCount = 1;
        }
    }

    // All conditions met
    return true;
}

bool Validators::isValidUsername(const string& username)
{
    // Check if empty
    if (username.empty())
    {
        return false;
    }

    // Check if starts with an English letter
    if (!isalpha(username[0]))
    {
        return false;
    }

    // Check for consecutive dots or underscores
    for (size_t i = 1; i < username.length(); ++i)
    {
        if ((username[i] == '.' || username[i] == '_') &&
            (username[i - 1] == '.' || username[i - 1] == '_'))
        {
            return false;
        }
    }

    // Check if ends with a valid character
    char lastChar = username.back();
    if (lastChar == '.' || lastChar == '_')
    {
        return false;
    }

    // Check if contains only valid characters (letters, digits, dots, underscores)
    for (char c : username)
    {
        if (!isalnum(c) && c != '.' && c != '_')
        {
            return false;
        }
    }

    // All conditions met
    return true;
}

bool Validators::isValidFirstName(const string& name)
{
    for (char c : name)
    {
        if (!isalpha(c))
        {
            return false;
        }
    }
    return true;
}

bool Validators::isValidLastName(const string& lastName)
{
    if (lastName[0] == '-' || lastName.back() == '-')
    {
        return false;
    }

    bool hyphenFound = false;
    for (char c : lastName)
    {
        if (!isalpha(c) && c != '-')
        {
            return false;
        }
        if (c == '-')
        {
            if (hyphenFound)
            {
                return false;
            }
            hyphenFound = true;
        }
    }
    return true;
}

bool Validators::isValidEmail(const string& email)
{
    int ATindex = email.find('@');
    int DOTindex = email.find('.');

    if (ATindex == string::npos || DOTindex == string::npos)
    {
        return false;
    }

    string userName = email.substr(0, ATindex);
    string domain;
    // string extension = email.substr(DOTindex + 1);

    if (!(isValidUsername(userName)))
    {
        return false;
    }

    ///how many dotes after @ ? indexing and if is bigger than 2 dots false
    int countDot = 0;
    int indexOfDots[3];

    for (int i = email.find('@'); i < email.size(); i++)
    {
        if (email[i] == '.')
        {
            indexOfDots[countDot] = i;
            countDot++;
        }
        if (countDot > 2)
        {
            return false;
        }
    }

    if (countDot == 0)
    {
        return false;
    }
    else if (countDot == 1)
    {
        string endOfEmail = email.substr(indexOfDots[0]);
        if (endOfEmail != ".com" || email.size() != indexOfDots[0] + 4)
        {
            return false;
        }

        domain = email.substr(ATindex + 1, (indexOfDots[0] - ATindex) - 1);
        if (domain.empty())
            return false;

        for (char c : domain)
        {
            if (!(isupper(c) || islower(c)))
            {
                return false;
            }

        }

    }
    else if (countDot == 2)
    {
        string endOfEmail = email.substr(indexOfDots[1]);
        if (endOfEmail != ".com" || email.size() != indexOfDots[1] + 4)
            return false;

        domain = email.substr(ATindex + 1, (indexOfDots[1] - ATindex) - 1);
        if (domain.empty() || domain[0] == '.' || domain.back() == '.')
            return false;

        domain.erase(indexOfDots[1] - ATindex - 1);
        for (char c : domain)
        {
            if (!(isupper(c) || islower(c) || c == '.'))
                return false;
        }
    }
    return true;
}

bool Validators::isValidPhoneNumber(const string& number)
{
    if (number.substr(0, 2) == "09")
    {
        // check for length
        if (number.size() != 11)
            return false;

        for (char c : number)
        {
            if (!isdigit(c))
                return false;
        }

    }
    else if (number.substr(0, 4) == "+989")
    {
        if (number.size() != 13)
            return false;

        for (int i = 1; i < 13; i++)
        {
            if (!isdigit(number[i]))
                return false;
        }
    }
    else
        return false;

    return true;
