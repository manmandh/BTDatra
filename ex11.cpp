#include<bits/stdc++.h>
using namespace std;

void changeFirstLetter(string &s) {
    for(int i=0; i<s.length(); i++) {
        if (s[i] == 'a') {
            s[i] = 'b';
            break;
        }
    }
}

int main(){
    string s; getline(cin,s);
    changeFirstLetter(s);
    cout << s << endl;
}