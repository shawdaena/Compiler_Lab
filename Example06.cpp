#include <bits/stdc++.h>
using namespace std;

bool Character_variable(string s)
{
    if (!(s[0] == 'c' && s[1] == 'h' && s[2] == '_'))
        return false;

    if (!((s[3] >= 'a' && s[3] <= 'z') || (s[3] >= 'A' && s[3] <= 'Z') || (s[3] >= '0' && s[3] <= '9')))
        return false;

    for (int i = 4; s[i] != '\0'; i++)
    {
        if (!((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= '0' && s[0] <= '9')))
            return false;
    }

    return true;
}

bool Binary_variable(string s)
{
    if (!(s[0] == 'b' && s[1] == 'n' && s[2] == '_'))
        return false;

    if (!((s[3] >= 'a' && s[3] <= 'z') || (s[3] >= 'A' && s[3] <= 'Z') || (s[3] >= '0' && s[3] <= '9')))
        return false;

    for (int i = 4; s[i] != '\0'; i++)
    {
        if (!((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z') || (s[0] >= '0' && s[0] <= '9')))
            return false;
    }

    return true;
}

bool Binary_Number(string s)
{
    if (s[0] != '0')
        return false;

    if (!(s[0] == '0' || s[0] == 1))
        return false;

    for (int i = 2; s[i] != '\0'; i++)
    {
        if (!(s[0] == '0' || s[0] == 1))
            return false;
    }

    return true;
}

int main()
{
    string s;
    while (cin >> s)
    {
        if (Character_variable(s))
            cout << s << " : Character variable" << endl;
        else if (Binary_variable(s))
            cout << s << " : Binary variable" << endl;
        else if (Binary_Number(s))
            cout << s << " : Binary Number" << endl;
        else
            cout << s << " : Invalid" << endl;
    }

    return 0;
}
