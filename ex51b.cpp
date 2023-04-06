#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
void input(int a[], int &n)
{
    do
    {
        cout << "Enter number: ";
        cin >> n;
        if (n <= 0 || n > MAX)
        {
            cout << "Invalid!! Please check again" << endl;
        }
    } while (n <= 0 || n > MAX);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int min(int a[], int &n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
int max(int a[], int &n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
int Pos_Max(int a[], int &n)
{
    int max = a[0];
    int indexm;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            indexm = i;
        }
    }
    return indexm;
}
int Pos_Min(int a[], int &n)
{
    int min = a[0];
    int index;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            a[i]=min;
            index = i;
        }
    }
    return index;
}
void output(int a[], int &n){
    cout << "Number: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\nMax is: " << max(a,n) << endl;
    cout << "\nPosition Max is: " << Pos_Max(a, n);
    cout << "\nMin is: " << min(a,n) << endl;
    cout << "\nPosition Min is: " << Pos_Min(a, n);
}
int main()
{
    int n;
    int a[MAX];
    input(a, n);
    output(a, n);
}
