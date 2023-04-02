#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100];
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cout << "arr[" << i << "] = ";
        cin >> a[i];
    }
    //1  2  3  4  5  a[i]
    //0  1  2  3  4; x=3
    //     m=6;
    //1  2  6  4  5
    int x; cout << "x = "; cin >> x;
    int m; cout << "m = "; cin >> m;
    cout << "a[" << x << "]= " <<a[x];
    a[x]= m; 
    for(int i=0; i<n;i++){
        cout <<a[i]<<endl;    
    }
}