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
    ll n;
    cin>>n;
    ll x[n+1];
    FOR(i,0,n-1)cin>>x[i];
    ll b[n+1],res=-1e9;
    FOR(i,0,n-1)
    {
        ll idx=lower_bound(b,b+n,x[i])-b;
        b[idx]=x[i];
        res=max(res,idx+1);
    }
    cout<<res<<endl;
}
