#include<bits/stdc++.h>
using namespace std;

bool Float_val(string s){
    if(!(tolower(s[0] >= 'a'&& s[0] <= 'h')|| tolower(s[0]>='o'&& s[0] <= 'z')))
        return false;

    for(int i = 1;s[i] != '\0';i++){
        if(!(tolower(s[i] >= 'a' && s[i] <= 'z') || (s[i]>='0' && s[i]<='9')))
         return false;
    }
    return true;
}

int FloatOrDouble(string s){
    int cnt = 0;
    for(auto ch : s){
        if(ch == '.') cnt++;
        else if(!isdigit(ch)) return false;
    }
    if(cnt >1 || cnt == 0) return false;
    cnt = 0;
    if(s[0] == '0' && s[1] != '.') return false;
    for(int i = s.size()-1;i>= 0;i--){
        if(s[i] == '.'){
            break;
        }
        else
            cnt++;
    }
    return cnt;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
    cin >> str;
    if(Float_val(str))
        cout << "Float Value" << endl;
    else if(FloatOrDouble(str)){
        if(FloatOrDouble(str) == 2)
            cout << "Float Number" << endl;
        else if(FloatOrDouble(str)>2)
            cout << "Double Number" << endl;
        else
            cout << "Undefined" << endl;

    }
    else
        cout << "Undefined" << endl;
    }

    return 0;
}