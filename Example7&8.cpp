#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> keyword = {
        "true", "false",
        "if", "for","do","while","else","switch", "case",
        "void", "typeptr", "delete", "or","and", "xor",
        "class", "const", "namespace","int", "double", "float","double",
        "unsigned"
    };

    vector<string> Arithmetic_operator = {"+", "-", "*", "/","%"};
    vector<string> Logical_operator = {"&&", "||", "!"};
    vector<string> Relational_operator = {"==", ">=", "<=", "!="};
    vector<string> Bitwise_operator = {"^", "|","&","<<",">>"};
    vector<string> Incremental_operator = {"++","--"};
    vector<string> Assignmental_operator = {"+=","-=","*="};

    string s;
    while(getline(cin, s)){
        if(find(keyword.begin(), keyword.end(),s) != keyword.end())
            cout << s << " : " << "Keyword" << endl;
        else if(find(Arithmetic_operator.begin(), Arithmetic_operator.end(),s) != Arithmetic_operator.end())
            cout << s << " : arithmetic operator" << endl;
        else if(find(Logical_operator.begin(), Logical_operator.end(),s) != Logical_operator.end())
            cout << s << " : Logical operator" << endl;
        else if(find(Relational_operator.begin(), Relational_operator.end(),s) != Relational_operator.end())
            cout << s << " : relational operator" << endl;
        else if(find(Bitwise_operator.begin(), Bitwise_operator.end(),s) != Bitwise_operator.end())
            cout << s << " : bitwise operator" << endl;
        else if(find(Incremental_operator.begin(), Incremental_operator.end(),s) != Incremental_operator.end())
            cout << s << " : incremental operator" << endl;
        else if(find(Assignmental_operator.begin(), Assignmental_operator.end(),s) != Assignmental_operator.end())
            cout << s << " : assignmental operator" << endl;
        else if(s[0] == '_' || isalpha(s[0])){
            bool flag = true;

            for(int i = 1;s[i] != '\0';i++){
                if(!isalnum(s[i]) && s[i] != '_'){
                    flag = false;
                    break;
                }
            }
            if(flag)
                cout << s << " : Identifier" << endl;
            else
                cout << "Invalid" << endl;
        }

        else if(s[0] == '"' && s[s.length()-1] == '"')
            cout << s << " : string leteral" << endl;
        else if(isdigit(s[0]) || s[0] == '.'){
            bool flag = true;
            int cnt = 0;
            for(int i = 1;s[i]!='\0';i++){
                if(!isdigit(s[i]) && s[i] != '.'){
                    flag = false;
                }
                if(s[i] == '.')
                    cnt++;
            }

            if(flag == true && cnt == 0)
            cout << s << " : decimal" << endl;
            else if(flag == 1 && cnt == 1)
            cout << s << " : Float" << endl;
            else
            cout << "Invalid" << endl;
        }
        else
            cout << "Invalid" << endl;
    }

    return 0;
}