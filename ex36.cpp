#include<bits/stdc++.h>
using namespace std;

int firstNumber(int a[], int n, int value){
    for(int i=0;i<n;i++){
        if(value ==  a[i])
        return i;
    }
    cout << "Not exists number: " << value <<  endl;
}
int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    cout <<"Enter value to find: ";
    int value; cin >> value;
    int index = firstNumber(a,n,value);
    if(index>=0){
        cout << index << endl;
    }
}