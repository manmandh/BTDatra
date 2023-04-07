#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int value;
    int n;
    vector<int> cc ;
    cout << "Enter number array: ";
    cin >> n;

    for(int i=0;i<n;i++){
        int num;
        cin >> num;
        cc.push_back(num);
    }
    cout << "Array avaible: ";
    for (int i=0;i<cc.size(); i++) {
        cout <<cc[i] << " ";
    }
    cout << endl;

    if (cc.size() < 100) {
        cout << "Enter value you need insert: ";
        cin >> value;
        //cc.insert(cc.begin(),cc.after(), value);

        cout << "Array new value: ";
        for (int i = 0; i < cc.size(); i++) {
            cout << cc[i] << " ";
        }
    } else {
        cout << "Invalid!! Array too length";
    }

    return 0;
}