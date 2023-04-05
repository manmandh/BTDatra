#include<bits/stdc++.h>
using namespace std;

//Check Prime
bool isPrime(int n){
    if(n<2){
        return false;
    }for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

//Input array
void inputArray(int a[], int n){
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
//Output Prime
void printArrayPrime(int a[], int n){
    cout<<"Cac so nguyen to la: "<<endl;
     for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n; cin >>n;
    int a[100001];
    inputArray(a,n);
    printArrayPrime(a,n);
    
}