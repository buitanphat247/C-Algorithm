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
    ll n,m,k,res=-1e9;
    cin>>n>>k;
    m=n;
    ll x[n+10][m+10];
    ll dp[n+10][m+10];
    FILL(dp,0);
    FOR(i,1,n)
    {
        FOR(j,1,m)
        {
            cin>>x[i][j];
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+x[i][j];
        }
    }
    FOR(i,1,n-k+1)
    FOR(j,1,m-k+1)
    res=max(res,dp[i+k-1][j+k-1]+dp[i-1][j-1]-dp[i+k-1][j-1]-dp[i-1][j+k-1]);
    cout<<res<<endl;
}
