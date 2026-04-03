#include <iostream>
using namespace std;

int main() {
    int jumlahBaris;

    cout << "INPUT  : ";
    cin >> jumlahBaris;

    cout << "OUTPUT : " << endl;

    for (int i = 0; i < jumlahBaris; i++) {
        int angka = 1;
        
        // Memberikan sedikit jarak di baris pertama agar sejajar dengan kata OUTPUT
        if (i == 0) cout << "         ";
        else cout << "         "; 

        for (int j = 0; j <= i; j++) {
            cout << angka << "  ";
            
            // Rumus untuk menghitung nilai baris berikutnya berdasarkan nilai saat ini
            angka = angka * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}