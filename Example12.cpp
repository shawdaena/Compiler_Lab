#include<bits/stdc++.h>
using namespace std;

bool is_operator(char x){
    return (x == '+' || x == '-' || x == '*' || x == '/');

}

bool check_operator(string s){
    if(is_operator(s[0]))
        return false;
    if(is_operator(s[s.length()-1]))
        return false;

    for(int i = 1;s[i]!='\0';i++){
        if(is_operator(s[i])){
            if(is_operator(s[i-1]))
                return false;

            if(is_operator(s[i-1]) == '(')
                return false;
        }
        if(is_operator(s[i-1])){
            if(is_operator(s[i]) == ')')
            return false;
        }

        if(s[i-1] == '(' && s[i] == ')')
        return false;
    }
    return true;
    
}

bool bracketCheck(string s){
    stack<char> brackts;
    for(int i = 0;s[i]!='\0';i++){
        if(s[i] == '(')
            brackts.push('(');

        else if(s[i] == ')'){
            if(brackts.size())
                brackts.pop();
            else
                return false;
        }
    }
    if(brackts.size() == 0)
    return true;
    else
    return false;
}

bool isValid(string s){
    if(s.empty() || !isalpha(s[0]) || s[0] != '_'){
        return false;
    }

    for(int i = 0;s[i] != '\0';i++){
        if(!(isalnum(s[i]) || s[i] == '_')){
            return false;
        }
    }

    static const string keywords[] = {
         "alignas", "alignof", "and", "and_eq", "asm", "auto", "bitand", "bitor",
        "bool", "break", "case", "catch", "char", "char8_t", "char16_t", "char32_t",
        "class", "compl", "concept", "const", "consteval", "constexpr", "const_cast",
        "continue", "co_await", "co_return", "co_yield", "decltype", "default", "delete",
        "do", "double", "dynamic_cast", "else", "enum", "explicit", "export", "extern",
        "false", "float", "for", "friend", "goto", "if", "inline", "int", "long",
        "mutable", "namespace", "new", "noexcept", "not", "not_eq", "nullptr", "operator",
        "or", "or_eq", "private", "protected", "public", "register", "reinterpret_cast",
        "requires", "return", "short", "signed", "sizeof", "static", "static_assert",
        "static_cast", "struct", "switch", "template", "this", "thread_local", "throw",
        "true", "try", "typedef", "typeid", "typename", "union", "unsigned", "using",
        "virtual", "void", "volatile", "wchar_t", "while", "xor", "xor_eq"
    };

    for(string keyword : keywords){
        if(s == keyword){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    while(getline(cin, s)){
        if(isValid(s)){
            cout << s << " : valid id" << endl;
        }
        else if(bracketCheck(s) && check_operator(s)){
            cout << s << " : Valid" << endl;
        }
        else
        cout << s << " : Invalid" << endl;
    }

    return 0;
}