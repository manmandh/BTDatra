#include<bits/stdc++.h>
#include<stdexcept>
using namespace std;

int main() {
    long long n, k = 0;
    cin >> n;
    try{
        if ((n>=0)&&(n<10)) {
            throw runtime_error("So dao nguoc la chinh no");
        }else if(n<0){
            throw runtime_error("Khong ton tai so dao nguoc");
        }
        do {
            k = k * 10 + n % 10;
            n = n / 10;
        } while (n != 0);
        cout << k;
    }catch (runtime_error& e) {
        cout << e.what() << endl;
    }
    return 0;
}