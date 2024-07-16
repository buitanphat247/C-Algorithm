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
    ll n,s;
    cin>>n>>s;
    ll w[n+10],v[n+10];
    FOR(i,1,n){
        cin>>w[i];
        cin>>v[i];
    }
    ll dp[n+10][s+10];
    FillChar(dp,0);
    FOR(i,1,n)
    {
        FOR(j,1,s)
        {
            dp[i][j]=dp[i-1][j];
            if (j >= w[i]) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + v[i]);
            }
        }
    }
    cout<<dp[n][s]<<endl;
}
