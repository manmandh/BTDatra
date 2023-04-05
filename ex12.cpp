#include<bits/stdc++.h>
using namespace std;

void changeLetter(string &s) {
    for(int i=0; i<s.length(); i++) {
        if (s[i] == 'a') {
            s[i] = 'b';
        }
    }
}

int main(){
    string s; getline(cin,s);
    changeLetter(s);
    cout << s << endl;
}