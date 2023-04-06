#include<bits/stdc++.h>
using namespace std;

void input(int a[], int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
int main() {
    int a[10001];
    int n = sizeof(a) / sizeof(a[0]);
    cin >> n;
    input(a,n);
    
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (a[j]>a[j+1]) {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for (int i=0;i<n;i++) {
        cout << a[i] << " ";
    }
    return 0;
}
