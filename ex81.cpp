#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a, b, x;
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "Phuong trinh co vo so nghiem" << endl;
        }
        else
        {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    } 
    else{
        x=-b/a;
        cout << "Phuong trinh co nghiem la " << x<<endl;
    }
    return 0;
}