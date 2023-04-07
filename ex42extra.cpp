#include <iostream>
using namespace std;
#define nln '\n'

int findMax(int n)
{
    int S, k;
    S=0;
    k=0;
    if(n>0)
    {
        while( n > S + (k+1) )
        {
        k++;
        S += k;
        }
        return k;
    }
    else{
        return 99999;
    }
}

int main()
{
    int n;
    cin >> n;
    int KQ = findMax(n);
    if( KQ == 99999)
        {
        cout << "N" << nln;
        }
         else
        {
            cout << KQ;
        }
   
}