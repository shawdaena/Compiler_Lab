#include<bits/stdc++.h>
using namespace std;

int precedence(char x){
    if(x == '^'){
        return 3;
    }
    if(x == '*' || x == '/'){
        return 2;
    }
    if(x == '+' || x == '-'){
        return 1;
    }

    else
        return -1;
}

void infToPostfix(string s){
    stack<char>stk;
    stk.push('(');
    s = s+")";
    int i = 0;

    while(s[i] != '\0'){
        char top = stk.top();

        if(s[i] == '(')
            stk.push(s[i]);

        else if(s[i] == ')'){
            while (stk.top() != '(')
            {
                cout << stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else if((s[i] >= 'A' && s[i] <= 'Z') || (s[i]>='a' && s[i] <= 'z') || (s[i] >= '0' && s[i]<=9)){
            cout << s[i];
        }
        else{
            while (!stk.empty() && (precedence(stk.top()) > precedence(s[i])))
            {
                cout << stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
        i++;
    }
    cout << endl;
}

int main(){
    string s;
    getline(cin, s);
    infToPostfix(s);
    return 0;
}