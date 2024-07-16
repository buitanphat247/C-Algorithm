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
    ll n;
    cin>>n;
    ll t[n+10],r[n+10];
    FOR(i,1,n)cin>>t[i];
    FOR(i,1,n-1)cin>>r[i];
    ll dp[n+10];
    FillChar(dp,0);
    dp[1]=t[1];
    dp[2]=min(dp[1]+t[2],dp[0]+r[1]);
    FOR(i,3,n)
    {
        dp[i]=min(dp[i-2]+r[i-1],dp[i-1]+t[i]);
    }
    cout<<dp[n]<<endl;
}
