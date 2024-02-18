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
    freopen("MINSUM.inp", "r", stdin);
    freopen("MINSUM.out", "w", stdout);
    long long l, g;
    cin >> g >> l;
    long long k = l / g, res = 1e9, a, b;
    for (long long x = 1; x*x <= k; x++)
    {
        if(k%x==0)
        {
            long long y=k/x;
            if (x * y == k && __gcd(x,y) == 1)
            {
                res = min(res, g * (x + y));
                a = g * x;
                b = g * y;
            }
        }
        /*for (long long y = 1; y <= k; y++)
        {
        if (x * y == k && __gcd(g * x, g * y) == g)
        {
            res = min(res, g * (x + y));
            a = g * x;
            b = g * y;
        }
        */
    }
    if (a * b / __gcd(a, b) == l)
        cout << res;
    else
        cout << -1;

    return 0;
}
