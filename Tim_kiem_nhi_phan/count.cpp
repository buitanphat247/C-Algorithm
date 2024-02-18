#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
const long long N=1000000;
long long a[N+2];
int n, k, ans, val;
bool check (int x)
{
    ll t = 0;
    for (int i=1; i<=x; i++)  t += a[i];

    if (x * a [x]- t <= k)
    {
        val =a [x];
        return true;
    }
    for (int i=x+1; i<=n; i++)
    {
        t = t + a[i] - a[i-x];
        if (x *a[i] - t <= k)
        {
            val=a[i];
            return true;
        }
    }
    return false;
}
int main()
{
    freopen ("count.inp", "r", stdin);
    freopen ("count.out", "w", stdout);
    cin >> n >> k;
    for (int i=1; i<=n; i++) cin >> a[i];
    sort (a+1, a+n+1);
    long long l=1,r=n;
    while(l <= r)
    {
        int mid=(l + r)/2;
        if (check (mid))
        {
            ans=mid;
            l=mid + 1;
        }
        else r =mid-1;

    }
    cout << ans << " " << val;
    return 0;
}
