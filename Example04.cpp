#include <bits/stdc++.h>
using namespace std;

bool int_variable(string s)
{
    if (!((s[0] >= 'i' && s[0] <= 'n') || (s[0] >= 'I' && s[0] <= 'N')))
        return false;
    for (int i = 1; s[i] != '\0'; i++)
    {
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')))
            return false;
    }

    return true;
}

bool shortInt_Number(string s)
{
    if (s.size() > 4)
        return false;
    if (!(s[0] >= '1' && s[0] <= '9'))
        return false;
    for (int i = 1; s[i] != '\0'; i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
            return false;
    }

    return true;
}

bool longInt_Number(string s)
{
    if (s.size() < 5)
        return false;
    if (!(s[0] >= '1' && s[0] <= '9'))
        return false;
    for (int i = 1; s[i] != '\0'; i++)
    {
        if (!(s[i] >= '0' && s[i] <= '9'))
            return false;
    }

    return true;
}

int main()
{
    string s;
    while (cin >> s)
    {
        if (int_variable(s))
            cout << s << " :Integer Variable" << endl;
        else if (shortInt_Number(s))
            cout << s << " : ShortInt Number" << endl;
        else if (longInt_Number(s))
            cout << s << " : LongInt Number" << endl;
        else
            cout << s << " : Invalid" << endl;
    }

    return 0;
}
