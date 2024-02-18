#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("KNTO.inp", "r", stdin);
    freopen("KNTO.out", "w", stdout);

    ll n;
    cin >> n;
    ll ans = 1,pcnt = 0;
    ll i = 2;
    while (true)
    {
        if (i*i > n) break;
        if (n % i == 0)
        {
            ++pcnt;
            ll dcnt = 0;
            while (n % i == 0)
            {
                dcnt++;
                n /= i;
            }
            ans *= (dcnt + 1);
        }
        i++;
    }
    if (n != 1)
    {
        ans *= 2;
        pcnt++;
    }
    cout << ans - pcnt;
}
