#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<long double> a(1000001);
    for (long double i = 1; i <= 1000000; i++) {
        a[i] = a[i - 1] + (double)1 / i;
    }

    long long t;
    cin >> t;
    while (t--) {
        long long b;
        cin >> b;
        cout << setprecision(5) << fixed << a[b] << "\n";
    }
    return 0;
}
