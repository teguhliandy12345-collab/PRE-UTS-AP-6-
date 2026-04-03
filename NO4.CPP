#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah baris: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char huruf = 'A' + i; 

        for (int j = 0; j <= i; j++) {
            cout << huruf << " ";
        }

        cout << endl;
    }

    return 0;
}