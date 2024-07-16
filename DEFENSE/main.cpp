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
#define FillChar(a,x) memset(a,x,sizeof(a))
int main()
{
    fast;
    fe("DEFENSE.inp","r",stdin);
    fe("DEFENSE.out","w",stdout);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x[n],ans=-1e9;
        vector<ll>dp(n,1);
        FOR(i,0,n-1)cin>>x[i];
        FOR(i,1,n-1)
        {
            FOR(j,0,i-1)
            {
                if(x[i]>x[j])
                    dp[i]=max(dp[i],dp[j]+1);
            }
            ans=max(ans,dp[i]);
        }
        cout<<ans<<endl;
    }
}
