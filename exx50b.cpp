#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int k =0;
    //1234
    //4321
    while(n!=0){
        k=k*10 + n%10;
        n/=10;
    }
    cout << k << endl;
}