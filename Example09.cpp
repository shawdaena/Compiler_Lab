#include <bits/stdc++.h>
using namespace std;

int main()
{

    set<string> pn = {"Sagor", "Selim", "Salma", "Nipu", "he", "she", "I", "we", "you", "they"};
    //set<string> p = {};
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
        if(find(pn.begin(), pn.end(), words[0]) == pn.end())
            isValid = false;
        if(find(v.begin(), v.end(), words[1]) == v.end())
            isValid = false;
        if(words.size() == 3){
            if(find(n.begin(), n.end(), words[2]) == n.end())
                isValid = false;
        }
        if (isValid)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;

        //words.clear();
    }

    return 0;
}