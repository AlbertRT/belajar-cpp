#include <iostream>

using namespace std;

int main() {
    int a= 0, b = 1, c, n;

    cout << "Masukan angka: ";
    cin >> n;

    cout << b << endl;

    for(int i = 0; i < n; i++) {
        c = a + b;
        b = a;
        a = c;

        cout << c;
    }

    return 0;
}