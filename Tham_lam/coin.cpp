#include<bits/stdc++.h>
using namespace std;

struct Coins
{
    long long x, y;
};

bool compareCoins(const Coins& a, const Coins& b)
{
    return (a.y-a.x)<(b.y-b.x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("COIN.INP", "r", stdin);
    freopen("COIN.OUT", "w", stdout);
    long long n, m;
    cin >> n >> m;
    vector<Coins> dp(n);
    for (long long i = 0; i < n; i++)
        cin >> dp[i].x;
    for (long long i = 0; i < n; i++)
        cin >> dp[i].y;
    sort(dp.begin(), dp.end(), compareCoins);
    for (long long i = 0; i < dp.size(); i++)
    {
        if(dp[i].y-dp[i].x<=m)
            m+=dp[i].x;
    }
    cout << m << endl;

    return 0;
}
