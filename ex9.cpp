#include<bits/stdc++.h>
using namespace std;
// bool firstChar(char ch, int index){
//     if (index == 1 && ch!= ' '){
//         return true;
//     }else {
//         return false;
//     }
// }
// int main(){
//     string s; getline(cin, s);
//     char ch;
//     cin >> ch;
//     for(int i=0; i<= s.length();i++){
//         if(firstChar(s[i],i)){
//         cout <<"Chuoi bat dau bang ki tu: " << ch <<" co vi tri la: " << i << endl;
//         }
//     }
//     return 0;
// }
int main() {
    string s;
    getline(cin,s);
    int index = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a') {
            index = i - 2;
            break;
        }
    }
    if (index != 1){
        cout << "Vi tri dau tien cua ki tu a trong chuoi la: " << index << endl;
    }else {
        cout << "Khong tim thay ki tu 'a' trong chuoi" << endl;
    }
    return 0;
}