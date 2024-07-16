#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);

    ll n, m, x;
    cin >> n >> m >> x;

    ll dp[n+1][m+1];
    for (ll i = 1; i <= n; ++i)
        for (ll j = 1; j <= m; ++j)
            cin >> dp[i][j];

    sort(dp[x] + 1, dp[x] + m + 1);

    for (ll i = 1; i <= n; ++i) {
        for (ll j = 1; j <= m; ++j)
            cout << dp[i][j] << " ";
        cout << endl;
    }

    return 0;
}
