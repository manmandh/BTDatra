#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100001];
    int n; cin >> n;
    int S=0;
    for(int i=0;i<n;i++){
        cout << "arr[" << i << "] = ";
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        S+=a[i];
    }
    cout << S << endl;
}