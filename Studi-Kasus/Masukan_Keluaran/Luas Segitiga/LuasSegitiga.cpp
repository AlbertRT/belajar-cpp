#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a, t;
    cin >> a >> t;
    double l = 0.5 * a * t;
    cout << fixed << setprecision(2) << l << endl;
    return 0;
}
