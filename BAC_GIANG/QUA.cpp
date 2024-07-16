#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define READ(name) freopen(name".inp","r",stdin);freopen(name".out","w",stdout);
#define FILL(name,x) memset(name,x,sizeof(name))
#define pb push_back
#define FOR(i,l,r) for(ll i=l;i<=r;i++)

const ll nmax=1e7;
int main()
{
    fast();
    READ("QUA");
    ll n;
    cin>>n;
    ll a[n+1],w[n+1],dp[n+1];
    FILL(a,0);
    FILL(w,0);
    FILL(dp,0);
    ll ans=dp[1];
    FOR(i,1,n)
    {
        cin>>a[i]>>w[i];
        if(i==1)
            dp[1]=w[1],ans=dp[1];
        else if(i>=2)
        {
            FOR(j,1,i-1)
            {
                if(a[i]>a[j])
                    dp[i]=max(dp[i],dp[j]+w[i]);
                else if(a[i]<=a[j])
                {
                    dp[i]=max(dp[i],w[i]);
                }
            }
            ans=max(ans,dp[i]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
