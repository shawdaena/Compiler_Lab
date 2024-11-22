#include<bits/stdc++.h>
using namespace std;

bool Char_val(string s){
    if(!(s[0] == 'c' && s[1] == 'h' && s[2] == '_'))
        return false;

    if(!(tolower(s[3] >= 'a' && s[3] <= 'z') || (s[3] >= '0' && s[3] <= '9')))
        return false;
    for(int i = 4;s[i] != '\0';i++){
        if(!(tolower(s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')))
        return false;
    }

    return true;
}

bool Binary_Val(string s){
    if(!(s[0] == 'b' && s[1] == 'n' && s[2] == '_'))
        return false;

    if(!(tolower(s[3] >= 'a' && s[3] <= 'z') || (s[3] >= '0' && s[3] <= '9')))
        return false;
    for(int i = 4;s[i] != '\0';i++){
        if(!(tolower(s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')))
        return false;
    }

    return true;
}

bool Binary_Number(string s){
    if(s[0] != '0') return false;
    if(!(s[1] == '0' || s[1] == '1')) return false;
    for(int i = 2;s[i] != '\0';i++){
        if(!(s[1] == '0' || s[1] == '1')) return false;
    }
    
    return true;
}

int main(){
    string str;
    cin >> str;

    if(Char_val(str))
        cout << "Character Variable" << endl;
    else if(Binary_Val(str))
        cout << "Binary Variable" << endl;
    else if(Binary_Number(str))
        cout << "Binary Number" << endl;
    else
        cout << "Undefind" << endl;

    return 0;
}