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
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll n,k;
    cin>>n>>k;
    ll x[n],res=-1e9;
    vector<ll>h;
    FOR(i,1,n)
    {
        cin>>x[i];
        res=max(res,x[i]);
        h.pb(res);
    }
    while(k--)
    {
        ll j;
        cin>>j;
        cout<<h[j-1]<<endl;
    }
}
