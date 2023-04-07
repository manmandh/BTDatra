#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    vector<int> cc;
    cout << "Enter number array: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        cc.push_back(value);
    }
    //Check length
    if(cc.size() < 100) {
        int newValue;
        cout << "Enter value you need insert: ";
        cin >> newValue;
        cc.push_back(newValue);
        cc.insert(cc.begin(), newValue);
        cout << "Result: ";
        for (int i = 0; i < cc.size(); i++) {
            cout << cc[i] << " ";
        }
    }else{
        cout << "Invalid!! Array too length";
    }
}