#include <iostream>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int masing_masing_bebek = n / m;
    int sisa_bebek = n % m;

    cout << "masing masing " << n / m << endl;
    cout << "bersisa " << n % m << endl;

    return 0;
}