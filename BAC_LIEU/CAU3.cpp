#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FILL(a,x) memset(a,x,sizeof(a))
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define RFOR(i,l,r) for(ll i=r;i>=l;i--)
#define READ(name) freopen(name".inp","r",stdin); freopen(name".out","w",stdout);

int main()
{
    READ("cau3");
    ll n,k;
    cin>>n>>k;
    ll x[n+1][n+1];
    ll dp[n+1][n+1];
    FILL(dp,0);
    FOR(i,1,n)
    {
        FOR(j,1,n)
        {
            cin>>x[i][j];
               dp[i][j]=dp[i-1][j]+dp[i][j-1]+x[i][j]-dp[i-1][j-1];
        }
    }
    /*FOR(i,1,n)
    {
        FOR(j,1,n)
        cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/
    ll res=-1e9;
    FOR(i,1,n-k+1)
    {
        FOR(j,1,n-k+1)
        {
            res=max(dp[i+k-1][j+k-1]-dp[i+k-1][j-1]-dp[i-1][j+k-1]+dp[i-1][j-1],res);
        }
    }
    cout<<res<<endl;

}
