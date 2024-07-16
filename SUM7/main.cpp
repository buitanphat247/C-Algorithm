#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double a[1000001];

int main() {
    ios::sync_with_stdio(false);

    a[1] = 1;
    for (int i = 2; i <= 1000001; i++) {
        a[i] = sqrt(a[i - 1] + i);
    }

    int t, n;
    cin >> t;

    for (int j = 1; j <= t; j++) {
        cin >> n;
        cout << fixed << setprecision(5) << a[n] << endl;
    }

    return 0;
}
