#include <bits/stdc++.h>
using namespace std;

bool Integer_Variable(string str)
{
    if (!((str[0] >= 'i' && str[0] <= 'n') || (str[0] >= 'I' && str[0] <= 'N')))
        return false;

    int length = str.length();

    for (int i = 1; str[i] != '\0'; i++)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')))
            return false;
    }
    return true;
}

bool shortLong_num(string s)
{
    if (s.size() == 0)
        return false;

    if (s[0] == '0')
    {
        return false;
    }

    for (int i = 1; s[i] != '\0'; i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
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
        else if (shortLong_num(s))
        {
            if (s.size() <= 4)
            {
                cout << "Short Number" << endl;
            }
            else
            {
                cout << "Long Number" << endl;
            }
        }
        else
            cout << "Undifiend" << endl;
    }

    return 0;
}