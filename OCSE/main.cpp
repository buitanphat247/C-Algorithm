#include<bits/stdc++.h>
#include <vector>
#define ll long long
#define pb push_back
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define RFOR(i,l,r) for(ll i=r,i>=l;i--)
#define READ(name) freopen(name".inp","r",stdin);freopen(name".out","w",stdout);
#define FILL(name,x) memset(name,x,sizeof(name))
using namespace std;
const ll nmax=150;
ll dp[nmax][nmax];
ll  cnt=0;
ll dx[]={-1,1,0,0};
ll dy[]={0,0,-1,1};
ll n,m,x,y;
void dfs(ll x,ll y)
{
    FOR(i,0,3)
    {
        if(x+dx[i]>=1&&x+dx[i]<=n&&y+dy[i]>=1&&y+dy[i]<=m&&dp[x+dx[i]][y+dy[i]]==0)
        {
            cnt++;
            dp[x+dx[i]][y+dy[i]]=1;
            dfs(x+dx[i],y+dy[i]);
        }
    }
}
int main()
{
    READ("1");
    FILL(dp,0);
    cin>>n>>m>>x>>y;
    FOR(i,1,n)
    {
        FOR(j,1,m)
        {
            cin>>dp[i][j];
        }
    }
    dp[x][y]=1,cnt=1;
    FOR(i,1,n)
    {
        FOR(j,1,m)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    dfs(x,y);
    cout<<cnt<<endl;
    return 0;
}
