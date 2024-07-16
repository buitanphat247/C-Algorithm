#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, res = 0, a[10001];

void solve() {
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cout << max(a[1] * a[2], a[n - 1] * a[n]);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();
    return 0;
}
