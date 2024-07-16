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
    READ("PAFLOWER");
    ll n;
    cin>>n;
    ll a[n+10],b[n+10];
    FILL(a,0);
    FILL(b,0);
    string s1="";
    string s2="";
    FOR(i,1,n)
    {
        cin>>a[i]>>b[i];
        if(a[i]<0)
            s1=s1+"a";
        else s1=s1+"d";
        if(b[i]<0)
            s2=s2+"a";
        else s2=s2+"d";
    }
    ll dp[n+10][n+10];
    FILL(dp,0);
    FOR(i,1,s1.size())
    {
        FOR(j,1,s2.size())
        {
            string z="";
            z=z+s1[i-1]+s2[j-1];
            if (z == "ad" || z == "dd" || z == "da")
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n][n]<<endl;
}