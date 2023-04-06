#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void VeHinhVuong1(int n){
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
              cout << "*";
        }
        cout << endl;
    }
}

void VeHinhVuong2(int n){
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
               cout << "*";
            }
            else{
                cout << " ";
            }   
        }
        cout << endl;
    }
}
void VeHinhVuong3(int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == 0 || i == n-1 || j == 0 || j == n-1){
               cout << "*";
            }
            else{
                cout << "#";
            }   
           
        }
        cout << endl;
    }
}
void VeHinhVuong4(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << i << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
void VeHinhVuong5(int n){
    for(int i = 1; i<=2*n+1;i++){
        for(int j=1;j<=2*n+1;j++){
            if(i<n+1){
                if(j<n+1)
                cout<< max(n+1-i,n+1-j);
                else
                cout<< max(n+1-i,j-n-1);
            }
            else
            {
                if(j<n+1){
                    cout<<max(i-n-1,n+1-j);
                }
                else{
                    cout<<max(i-n-1,j-n-1);
                }
            }
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin >> n;
    VeHinhVuong1(n); cout << endl;
    VeHinhVuong2(n); cout << endl;
    VeHinhVuong3(n); cout << endl;
    VeHinhVuong4(n); cout << endl;
    VeHinhVuong5(n);
    return 0;
}
