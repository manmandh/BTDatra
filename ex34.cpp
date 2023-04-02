#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10001];
    int n; cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int S=0;
    for(int i=0;i<n;i++){
        S+=a[i];
    }
    float avg = (float)S/n;
    cout << avg;
}