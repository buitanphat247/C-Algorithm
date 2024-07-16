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
    ll a, b,c,d ;
    cin >> a >> b >> c >> d ;
    if ( c<=b && a<=d )
    {
        cout << "YES";
    }
    else cout << "NO";
    return 0;
}
