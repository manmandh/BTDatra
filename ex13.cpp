#include<bits/stdc++.h>
using namespace std;

bool checkLetter(string s){
    for(int i=0; i< s.length();i++){
        if((s[i]<'a'||s[i]>'z')&&(s[i]<'A'||s[i]>'Z')){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if (checkLetter(s)){
        cout << "True" << endl;
    }else{
        cout << "False" << endl;
    }
}