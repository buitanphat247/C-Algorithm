#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FILL(a,x) memset(a,x,sizeof(a))
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define RFOR(i,l,r) for(ll i=r;i>=l;i--)
#define READ(name) freopen(name".inp","r",stdin); freopen(name".out","w",stdout);

int main()
{
    READ("CAU1");
    ll n;
    cin>>n;
    ll x[n+1];
    FOR(i,1,n)
    cin>>x[i];
    vector<ll> dp(n+1,1);
    ll res=-1e9;
    FOR(i,1,n)
    {
        FOR(j,1,i)
        if(x[i]>x[j])
            dp[i]=max(dp[i],dp[j]+1);
        res=max(res,dp[i]);
    }
    cout<<res<<endl;
}
