#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
#define FILL(a,x) memset(a,x,sizeof(a))
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define READ(name) freopen(name".inp","r",stdin); freopen(name".out","w",stdout);
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const ll nmax = 3*1e6;

int main()
{
    fast();
    READ("SODACBIET");
    vector<ll>dp(nmax,0);
    vector<ll>pr(nmax,0);
    for(ll i=1; i<=nmax; i++)
    {
        for(ll j=i; j<=nmax; j+=i)
            dp[j]+=i;
    }
    for(ll i=1; i<=nmax; i++)
    {
        dp[i]-=i;
        if(dp[i]>i)
            dp[i]=1;
        else
            dp[i]=0;
        pr[i]=pr[i-1]+dp[i];
    }
    ll l,r;
    cin>>l>>r;
    cout<<pr[r]-pr[l-1]<<endl;
    return 0;
}
