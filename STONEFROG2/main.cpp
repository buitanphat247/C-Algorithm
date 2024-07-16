#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FILL(a,x) memset(a,x,sizeof(a))
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define RFOR(i,l,r) for(ll i=r;i>=l;i--)
#define READ(name) freopen(name".inp","r",stdin); freopen(name".out","w",stdout);

int main()
{
    READ("1");
    ll n,k;
    cin>>n>>k;
    ll x[n+5];
    FOR(i,1,n)cin>>x[i];
    vector<ll>dp(n+10,1e9);
    dp[0]=dp[1]=0;
    FOR(i,2,n)
    {
        FOR(j,max(1LL,i-k),i-1)
            dp[i]=min(dp[i],dp[j]+abs(x[i]-x[j]));
    }
    cout<<dp[n]<<endl;
}
