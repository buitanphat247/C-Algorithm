#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fe(name_file,tus,type) freopen(name_file,tus,type);
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define FILL(a,x) memset(a,x,sizeof(a))
int main()
{
    fast;
    ll n;
    cin >> n;
    ll b[n+10], r[n+10];
    FOR(i,1,n) cin >> b[i];
    FOR(i,1,n) cin >> r[i];
    sort(b+1, b+1+n);
    sort(r+1, r+1+n);
    ll res = 1e9;
    FOR(i,1,n)
    {
        ll bx1 = upper_bound(r+1, r+n+1, b[i]) - r;
        ll rx1 = upper_bound(b+1, b+n+1, r[i]) - b;
        if (bx1 <= n)
            res = min(res, abs(r[bx1] - b[i]));
        if (bx1 > 1)
            res = min(res, abs(r[bx1-1] - b[i]));
        if (rx1 <= n)
            res = min(res, abs(r[i] - b[rx1]));
        if (rx1 > 1)
            res = min(res, abs(r[i] - b[rx1-1]));
    }
    cout << res << endl;
    return 0;
}
