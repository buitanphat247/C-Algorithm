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
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll n,k,ans=-1e9;
    cin>>n>>k;
    ll x[n+10],dp[n+10];
    FillChar(dp,0);
    FOR(i,1,n)cin>>x[i];
    FOR(i,1,n)
    {
        dp[i]=LLONG_MIN;
        FOR(j,max(0LL,i-k),i-1)
            dp[i]=max(dp[i],dp[j]+x[i]);
        ans=max(dp[i],ans);
    }
    cout<<ans<<endl;
}
