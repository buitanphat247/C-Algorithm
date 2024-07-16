#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define FILL(name,x) memset(name,x,sizeof(name))
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DAYCON.inp","r",stdin);
    freopen("DAYCON.out","w",stdout);
    ll n,m,cnt=0;
    cin>>n>>m;
    ll x[n+1],dp[n+1];
    FILL(dp,0);
    FOR(i,1,n)
    {
        cin>>x[i];
        if(x[i]<=m)cnt++;
        if(i==1)dp[i]=x[i];
        else if(i>1) dp[i]=x[i]+dp[i-1];
    }
    FOR (i,1,n-1)
    {
        ll idx=upper_bound(dp+i,dp+n+1,dp[i-1]+m)-dp-1;
        if(idx>i)
            cnt+=idx-i;
    }
    cout<<cnt<<endl;
}
