#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d; cin>>a>>b>>c>> d;
    int min=a;
    if(min>b){
        min=b;
    }
    if(min>c){
        min=c;
    }
    if(min>d){
        min=d;
    }
    cout << min << endl;
}