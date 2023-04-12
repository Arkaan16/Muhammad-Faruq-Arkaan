#include <iostream>
using namespace std;

int kaliDigitSepuluh(int x) {
    if (x == 0) {
        return 1;
    } else {
        return 3 * kaliDigitSepuluh(x - 1);
    }
}

int main() {
    int x = 2;
    int hasil = kaliDigitSepuluh(x);
    cout << "Hasil kali digit 10 sebanyak " << x << " kali adalah " << hasil << endl;
    return 0;
}
