#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100];
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cout << "arr[" << i << "] = ";
        cin >> a[i];
    }
    //10 20 40 50 80
    //0  1  2  3  4
    //a[2]=40;
    int x;
    cout << "x = ";
    cin >> x;
    for(int i=0; i<n;i++){
        if((x>=0)&&(x<=n)){
            cout << "arr[" << x << "] = " << a[x];
            break;
        } 
    }
}