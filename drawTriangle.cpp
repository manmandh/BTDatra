#include<bits/stdc++.h>
using namespace std;
void TamGiac1(int n){
    for(int i=1; i<=n;i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void TamGiac2(int n){
    for(int i=1; i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout << "*";
        }
        cout<<endl;
    }
}
void TamGiac3(int n){
    for(int i=1; i<=n; i++){
        for(int j = 1; j <= n; j++){
            if(j<=n-i)
            cout << " ";
            else
            cout<< "*";
        }
        cout << endl;
    }
}
void TamGiac4(int n){
    for(int i=1; i<=n; i++){
        for(int j = 1; j <= n; j++){
            if(j<i){
            cout << " ";
            }
            else
                cout<<"*";
        }
        cout << endl;
    } 
}
void TamGiac5(int n){
    for(int i=1; i<=n;i++){
        for(int j =1; j <= n; j++){
            if(j==i||j==1||i==n)
                cout<<"*";
            else
            cout << " ";
        }
        cout << endl;
    }
}

void TamGiac6(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i * 2 - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void TamGiac7(int n){
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n-i; j++) 
        {
            cout << "  ";
        }
        for(int j = 1;j <= i*2-1; j++)
        {
            if(i == 1|i ==n||j == 1||j== 2*i-1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
    cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    TamGiac1(n); cout << endl;
    TamGiac2(n); cout << endl;
    TamGiac3(n); cout << endl;
    TamGiac4(n); cout << endl;
    TamGiac5(n); cout << endl;
    TamGiac6(n); cout << endl;
    TamGiac7(n);
}