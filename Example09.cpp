#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<string> pn = {"Sagor", "Selim", "Salma", "Nipu"};
    set<string> p = {"he", "she", "I", "we", "you", "they"};
    set<string> n = {"book", "cow", "dog", "home", "grass", "rice", "mango"};
    set<string> v = {"read", "eat", "take", "run", "write"};
    string sentence;
    while (getline(cin, sentence))
    {
        vector<string> words;
        string tem = "";

        for (int i = 0; sentence[i]; i++)
        {
            if (sentence[i] == ' ')
            {
                words.push_back(tem);
                tem = "";
            }
            else
                tem = tem + sentence[i];
        }
        words.push_back(tem);

      
        if (words.size() > 3 || words.size() < 2)
        {
            cout << "Invalid Input" << endl;
            break;
        }

        bool isValid = true;
        if (!pn.count(words[0]) && !p.count(words[0]))
            isValid = false;
        if (!v.count(words[1]))
            isValid = false;
        if (words.size() > 2 && !n.count(words[2]))
            isValid = false;

        if (isValid)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;

        //words.clear();
    }

    return 0;
}