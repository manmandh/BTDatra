#include<bits/stdc++.h>
using namespace std;

int main() {
    int mangGoc[] = { 1, 2, 3, 4, 5 };
    int doDaiMangGoc = sizeof(mangGoc) / sizeof(mangGoc[0]);
    int mangMoi[doDaiMangGoc];
    for (int i = 0; i < doDaiMangGoc; i++) {
        mangMoi[i] = mangGoc[i];
    }
    int i = 0, j = doDaiMangGoc - 1;
    while (i < j) {
        int temp = mangMoi[i];
        mangMoi[i] = mangMoi[j];
        mangMoi[j] = temp;
        i++;
        j--;
    }
    cout << "Mang moi da duoc dao chieu: ";
    for (int i = 0; i < doDaiMangGoc; i++) {
        cout << mangMoi[i] << " ";
    }
    cout << endl;
    return 0;
}
