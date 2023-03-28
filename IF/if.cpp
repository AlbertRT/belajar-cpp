#include <iostream>

using namespace std;

int main() {
    int a;

    cin >> a;

    for (int i = 0; i < a; ++i) {
        if (i % 2 != 0) {
            cout << i << " = Ganjil" << endl;
        } else {
            cout << i << " = Genap" << endl;
        }
    }

    return 0;
}