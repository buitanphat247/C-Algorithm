#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
#define pii pair<long long,long long>
const long long N = 10000;
pii g[N+2];
long long n, ans,B;

bool cmp(pii X, pii Y)
{
    return (X.first + X.second < Y.first + Y.second);
}

int main()
{
    freopen("gifts.inp", "r", stdin);
    freopen("gifts.out", "w", stdout);
    cin >> n >> B;
    for (long long i = 1; i <= n; i++)
        cin >> g[i].first >> g[i].second;
    sort(g+1, g+n+1, cmp);
    long long t = 0,index;
    for (long long i = 1; i <= n; i++)
    {
        if (t + g[i].first + g[i].second > B)
        {
            index = i;
            break;
        }

        t += g[i].first + g[i].second;
        ans++;
    }
    if (ans < n)
    {
        if (t + g[index].first/2 + g[index].second <= B)
            ans++;
        else
        {
            ll tien = LLONG_MAX;
            for (long long j = 1; j < index; j++)
            {
                if (t + g[index].first + g[index].second <= B)
                    tien = min(tien, t - g[j].first/2);
            }
            if (tien != LLONG_MAX)
                ans++;
        }
    }
    cout << ans << endl;

    return 0;
}
