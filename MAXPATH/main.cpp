#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n,m;
    cin>>m>>n;
    long long x[m+10][n+10],dp[m+10][n+10];
    memset(dp,0,sizeof(dp));
    for(long long i=1; i<=m; i++)
        for(long long j=1; j<=n; j++)
            cin>>x[i][j];
    long long ans=-1e9;
    for(long long j=1; j<=n; j++)
        for(long long i=1; i<=m; i++)
            dp[i][j]=x[i][j]+max(dp[i-1][j-1],max(dp[i][j-1], dp[i+1][j-1]));
    for(long long i=1;i<=m;i++)ans=max(ans,dp[i][n]);
    cout<<ans<<endl;
}
