#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100];
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cout << "arr[" << i << "] = ";
        cin >> a[i];
    }
    //1  2  4  5  2  a[i]
    //0  1  2  3  4; x=2
    //y=4
    //1  4  4  5  4
    int x; cout << "x = "; cin >> x;
    int y; cout << "y = "; cin >> y;
    for(int i=0; i<n;i++){
        if(a[i]==x){
            a[i]=y;
        }
        cout <<a[i]<<endl;     
    }
}