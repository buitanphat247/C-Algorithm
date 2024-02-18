#include <bits/stdc++.h>
using namespace std;
#define N 15000
long long a[N + 2];
long long n, k, ans, l, r;
bool check(long long x) {
    long long dem = 1, t = 0;

    for (long long i = 1; i <= n; i++) {
        t += a[i];
        if (t > x) {
            dem++;
            t = a[i];
        }
    }
    return dem <= k;
}

int main() {
    freopen("zxy.inp", "r", stdin);
    freopen("zxy.out", "w", stdout);
    cin >> n >> k;
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
        r += a[i];
    }
    l = *max_element(a + 1, a + n + 1);
    while (l <= r) {
        long long mid = (l + r) / 2;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
