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
    ll n;
    cin>>n;
    ll a[n+1];
    ll dp[n+1];
    FILL(dp,0);
    FOR(i,1,n)
    {
        cin>>a[i];
        dp[i]=a[i]+dp[i-1];
    }
    ll k;
    cin>>k;
    ll l=1,r=2,ans=-1;
    while(r<=n)
    {
        if(dp[r]-dp[l-1]<k)
            r++;
        else if(dp[r]-dp[l-1]>k)
            l++;
        else
        {
            ans=max(ans,r-l+1);
            r++,l++;
        }
    }
    cout<<ans<<endl;
}
