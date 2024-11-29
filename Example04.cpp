#include <bits/stdc++.h>
using namespace std;

bool Integer_Variable(string str)
{
    if (!((str[0] >= 'i' && str[0] <= 'n') || (str[0] >= 'I' && str[0] <= 'N')))
        return false;

    for (int i = 1; str[i] != '\0'; i++)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
            return false;
    }
    return true;
}

bool short_num(string s)
{
    if(s.size()>4)
        return false;

   if (!(s[0] >= '0' && s[0] <= '9'))
    {
        return false;
    }

    for (int i = 1; s[i] != '\0'; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }

    return true;
}

bool long_num(string s)
{
    if(s.size() < 5)
        return false;

   if (!(s[0] >= '0' && s[0] <= '9'))
    {
        return false;
    }

    for (int i = 1; s[i] != '\0'; i++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        if (Integer_Variable(s))
        {
            cout << "Integer variable" << endl;
        }
        else if (short_num(s))
        {
           cout << "Short Number" << endl;
        }
        else if (long_num(s))
        {
           cout << "Long Number" << endl;
        }
        else
            cout << "Undifiend" << endl;
    }

    return 0;
}