#include <iostream>
using namespace std;

int main() {

  int angka, hasil_balik = 0, sisa;

  cout << "Masukkan Angka: ";
  cin >> angka;

  while(angka != 0) {
    sisa = angka % 10;
    hasil_balik = hasil_balik * 10 + sisa;
    angka /= 10;
  }

  cout << "Hasil setelah dibalik = " << hasil_balik;

  return 0;
}