#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c; cin >> a >> b >> c;
    if((a>b+c)||(b<a+c)||(c<a+b)){
        cout << "Day la 3 canh cua mot tam giac" << endl;
    }else{
        cout << "Khong phai 3 canh cua mot tam giac" << endl;
    }

}