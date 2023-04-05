#include<bits/stdc++.h>
using namespace std;

int minValue(int a[]){
    int S=0;
    for(int i=0;i<5;i++){
        S+=a[i];
    }
    float avg = (float)S/5;
    float minValue = INT16_MAX;
    for(int i=0;i<5;i++){
    float value = abs(a[i]-avg);
    if(value < minValue)
    minValue=value;
    }
    return minValue + avg;
}


int main(){
    int a[5] = {1,3,6,7,9};
    cout << minValue(a) << endl;
}