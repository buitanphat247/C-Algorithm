#include<bits/stdc++.h>
#include <vector>
#define ll long long
#define pb push_back
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define RFOR(i,l,r) for(ll i=r,i>=l;i--)
#define READ(name) freopen(name".inp","r",stdin);freopen(name".out","w",stdout);
#define FILL(name,x) memset(name,x,sizeof(name))
const ll nmax=1e6;
using namespace std;
int main()
{
    READ("1");
    ll a,b;
    cin >> a >> b;
    ll x = (a + b) / 2, y = (a - b) / 2;
    cout << x << ' ' << y;
    return 0;
}
