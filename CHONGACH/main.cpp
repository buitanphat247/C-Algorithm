#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a[n + 1];
    a[0] = 0;
    for (long long i = 1; i <= n; i++)
        cin >> a[i];
    sort(a, a + n + 1);

    long long d = a[n];
    long long h = 0;
    if (n <= a[n])
        cout << n;
    else {
        for (long long i = n; i >= 1; i--) {
            if(a[i] < d)
                d = a[i];
            d -= 1;
            h += 1;
            if (d == 0) {
                if (i > 1)
                    h += 1;
                break;
            }
        }
        cout << h;
    }
    return 0;
}
