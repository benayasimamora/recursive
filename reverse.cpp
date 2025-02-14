#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0) return rev; // Base case: ketika n habis, kembalikan hasilnya
    return reverseNumber(n / 10, rev * 10 + (n % 10)); // Rekursi dengan digit terakhir dipindahkan ke rev
}

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    if (n < 0)
        cout << -reverseNumber(-n) << endl; // Jika negatif, ubah ke positif, balik, lalu kembalikan ke negatif
    else
        cout << reverseNumber(n) << endl;

    return 0;
}
