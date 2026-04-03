#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan dua angka: ";
    cin >> a >> b;

    // Algoritma Euclid
    while (b != 0) {
        int sisa = a % b;
        a = b;
        b = sisa;
    }

    cout << "FPB = " << a << endl;

    return 0;
}