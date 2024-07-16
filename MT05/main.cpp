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
//    fe("1.inp","r",stdin);
    //  fe("1.out","w",stdout);
    ll m,n,k;
    cin>>m>>n>>k;
    ll dp[m][n];
    FOR(i,0,m-1)
    FOR(j,0,n-1)
    cin>>dp[i][j];
    vector<ll>v;
    FOR(i,0,m-1)
        v.pb(dp[i][k-1]);
    sort(v.begin(),v.end());
    FOR(i,0,m-1)
        dp[i][k-1]=v[i];
    FOR(i,0,m-1)
    {
        FOR(j,0,n-1)
        cout<<dp[i][j]<<" ";
        cout<<endl;
    }

}
