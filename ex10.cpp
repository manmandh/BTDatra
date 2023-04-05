#include<bits/stdc++.h>
using namespace std;

int lastLetter(string s){
    int lastIndex = -1;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == 'a') {
            lastIndex = i;
        }
    }
    if(lastIndex == -1) {
        cout << "Not exists character 'a'" << endl;
    }
    return lastIndex;
}

int main(){
    string s; getline(cin,s);
    int index = lastLetter(s);
    if(index>=0){
        cout << index << endl;
    }
}