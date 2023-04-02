#include<bits/stdc++.h>
using namespace std;

int giaiThua(int n){
    int gt =1;
    for(int i=1;i<=n;i++){
        gt*=i;
    }
    return gt;
}
int main(){
    int a[100001];
    int n; cin >> n;
    float S=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        S+=giaiThua(a[i]);
    }
    cout<<S<<endl;
}