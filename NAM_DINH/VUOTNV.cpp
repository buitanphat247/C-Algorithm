#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define READ(name) freopen(name".inp","r",stdin); freopen(name".out","w",stdout);
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define FILL(name,x) memset(name,x,sizeof(name))
int main()
{
    fast();
    READ("VUOTNV");
    ll n,k,ans=0;
    cin>>n>>k;
    ll h[n+10],a[n+10];
    ll dp[n+10];
    FILL(dp,0);
    FILL(h,0);
    FOR(i,1,n)
    cin>>h[i];
    FOR(i,1,n)
    cin>>a[i];
    dp[1]=a[1];
    FOR(i,2,n)
    {
        FOR(j,1,i-1)
        {
            ll result=abs(h[i]-h[j]);
            if(result==k)
                dp[i]=max(dp[i],dp[j]+a[i]);
            else
                dp[i]=max(dp[i],a[i]);
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
}
