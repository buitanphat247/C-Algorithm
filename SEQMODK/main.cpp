#include <bits/stdc++.h>
using namespace std;

const int maxN = 57;

int N, K;
int Sub(int x, int y)
{
    int tmp = (x - y) % K;
    if (tmp >= 0) return tmp;
    return tmp + K;
}

void solve()
{
    cin >> N >> K;
    vector<int> a(N + 1);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
        a[i] = a[i] % K;
    }
    int dp[N][K];
    memset(dp, 1, sizeof dp);
    for (int i = 1; i < K; i++) dp[0][i] = -1e9 - 7;
    dp[0][0] = 1;
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j <= K - 1; j++)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][Sub(j, a[i - 1])] + 1);
        }
    }
    cout << dp[N - 1][0] << "\n";
}

int main()
{
    int tt = 1;
    while (tt--)
    {
        solve();
    }
    return 0;
}
