#include<bits/stdc++.h>
using namespace std;

int main(){
    //Create flagBoard
    /*  1 2 3
        4 5 6
        7 8 9
        Array2
    */


    //Player

    //Display flagBoard on the screen
    // X - O

    //Check result
    //Player win?
    //2 case + full row or column(1)
    //       + flagBoard full, no cell
    //Code
    

    //For
    // Khởi tạo mảng 2 chiều đánh số từ 1 tới 9 kích thước 3x3
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    // In ra các ô vuông 3x3 từ 1 tới 9
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           // if (i % 3 == 1 && j % 3 == 1) {
                /*  j1 j2 j3
            i1      1  2  3
            i2      4  5  6
            i3      7  8  9
                */
                // cout << arr[i-1][j-1] << " " << arr[i-1][j] << " " << arr[i-1][j+1] << endl;
                // cout << arr[i][j-1] << " " << arr[i][j] << " " << arr[i][j+1] << endl;
                // cout << arr[i+1][j-1] << " " << arr[i+1][j] << " " << arr[i+1][j+1] << endl;
                cout << arr[i][j] << " "; 
           //}
        }
        cout << endl;
    }
}