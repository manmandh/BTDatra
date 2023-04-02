#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
 
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
}
// ASC
void sortArrTang(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
}
// DSC
void sortArrGiam(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=i;j<n;j++){
            if(a[i]<a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
}
// Ham nhap mang
void inputArr(int a[], int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
// Ham xuat mang
void printArr(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<" "<<a[i];
}
int main(){
    int n;
    do{
        cin>>n;
    }
    while(n<=0);  
    int a[n]; 
    inputArr(a,n); 
    sortArrTang(a, n); 
    //sortArrGiam(a, n);
    printArr(a, n);
    return 0;
}
