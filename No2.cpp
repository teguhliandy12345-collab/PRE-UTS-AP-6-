#include <iostream>
using namespace std;

int main() {
    int n, kuadrat, jumlah = 0;

    cout << "Masukkan angka: ";
    cin >> n;

    kuadrat = n * n;

    int temp = kuadrat;
    while (temp > 0) {
        jumlah += temp % 10; // ambil digit terakhir
        temp /= 10;          // buang digit terakhir
    }

    if (jumlah == n) {
        cout << "ANGKA NEON" << endl;
    } else {
        cout << "BUKAN ANGKA NEON" << endl;
    }

    return 0;
}