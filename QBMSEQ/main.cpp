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
    ll n;
    cin>>n;
    ll x[n+10];
    FOR(i,1,n)cin>>x[i];
    ll dp[n+10],res=-1e9;
    FILL(dp,0);
    FOR(i,1,n)
    {

        FOR(j,1,i)
        if(x[i]>x[j])
            dp[i]=max(dp[i],dp[j]+1);
        res=max(res,dp[i]);
    }
    cout<<res+1<<endl;
}
