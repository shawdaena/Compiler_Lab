#include <bits/stdc++.h>
using namespace std;

void shift(string stk, string input){
    cout << stk << "\t\t" << input << "\t\t" << "Shift" << endl;
}

void reduce_to(string stk, string input, char a, char b){
    cout << stk << "\t\t" << input << "\t\t" << a << "->" << b << endl;
}

int main()
{
    int n;
    cout << "Enter the number of Rule : ";
    cin >> n;
    cin.ignore();

    string g_left[n], g_right[n];

    cout << "Enter the Rules :" << endl;
    for (int i = 0; i < n; i++)
    {
        string temp;
        getline(cin, temp);
        g_left[i].push_back(temp[0]);
        for (int j = 3; j<temp.size(); j++)
        {
            g_right[i].push_back(temp[j]);
        }
    }

    cout << "Find Grammer" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << g_left[i] << "->" << g_right[i] << endl;
    }

    string input;
    cin >> input;
    string stk = "$";

    input.push_back('$');

    while (input != "$"){
        stk.push_back(input[0]);
        input.erase(input.begin());
        shift(stk, input);

        for(int i = 0;i<n;i++){
            bool reduce = false;
            if(stk.find(g_right[i]) < stk.length()){
                 stk.erase(stk.find(g_right[i]), stk.length());
                 stk += g_left[i];
                 reduce_to(stk, input, g_left[i][0], g_right[i][0]);
                 reduce = true;
            }
             if(reduce) i = -1;  
        }
    }
    input += g_left[0];
    if(stk == input)
    cout << "Accepted" << endl;
    else
    cout << "Rejected" << endl;
    

    return 0;
}