#include<bits/stdc++.h>
using namespace std;
void max(int arr[], int &n ){
    int max = arr[0];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] > max)
        max = arr[i];
       // cout << arr[i] << endl;
    }
    cout << max << endl;
}
void min(int arr[], int &n ){
    int min = arr[0];
    for(int i = 0;i< n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++){
        if (arr[i] < min)
        min = arr[i];
    }
    cout << min << endl;
}
int main(){
    int arr[10000];
    int n;
    cin >> n;
    max(arr,n);
    min(arr,n);
}