#include<bits/stdc++.h>
using namespace std;

bool is_vowels(char x){
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
       x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
        return true;
       }
       return false;
}

void divide(string str)
{
    string vs;
    string cs;

    str = " " + str;

    for(int i = 1;str[i] != '\0';i++){
        if(str[i] != ' ' && str[i-1] == ' '){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
               str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
                int j;
                for(j = i; str[j] != '\0';j++){
                    if(str[j] == ' ') break;
                    vs = vs + str[j];
                }
                i = j;
                vs = vs+" ";
               }
               else{
                    int j;
                for(j = i; str[j] != '\0';j++){
                    if(str[j] == ' ') break;
                    cs = cs + str[j];
                }
                i = j;
                cs = cs+" ";
               }
        }
    }

    cout << "Words start with vowel : " << vs<<endl;
    cout << "Words start with consonent : " << cs << endl;
}


int main()
{
    string s;
    getline(cin, s);
    divide(s);
    vector<char> vowel, consonant;
    int vowels = 0, consonants = 0;
    for(int i = 0;i<s.size();i++){
        //if(i<s.size()-1 && s[i] == ' ' && s[i+1] == ' ') continue;
        if(is_vowels(s[i])){
            vowels++;
            vowel.push_back(s[i]);
        }
        else{
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z'){
                consonants++;
                consonant.push_back(s[i]);
            }
        }
    }

    cout << "Number of vowels = " << vowels << endl;
    cout << "Number of consonant = " << consonants << endl;

    int arr[200] = {0};
    for(int i = 0; s[i] != '\0';i++){
        arr[s[i]]++;
    }

    char v[] = {'a','e','i','o','u','A','E','I','O','U'};

    cout << "Vowel Existed ";
    for(int i = 0;i<10;i++){
        if(arr[v[i]] > 0)
            cout << v[i] << " ";
    }
    cout << endl;

    cout << "Consonent Existed ";
    for(int i = 'a'; i<='z';i++){
        if(!(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')){
            if(arr[i] > 0)
                cout << char(i) << " ";
        }
    }

    for(int i = 'A'; i<='Z';i++){
        if(!(i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')){
            if(arr[i] > 0)
                cout << char(i) << " ";
        }
    }
    cout << endl;



    return 0;
}

// Munmun is the student of Computer Science & Engineering
