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
struct xeplich{
    ll b,e,time;
};
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll n;
    cin>>n;
    xeplich x[n];
    FOR(i,0,n-1)
    {
        cin>>x[i].b>>x[i].e;
        x[i].time=x[i].e-x[i].b;
    }
    sort(x, x + n, [](const xeplich &x, const xeplich &y) {
        if (x.b != y.b) return x.b < y.b;
        return x.e < y.e;
    });
    ll dp[n+10],res=0;
    FILL(dp,1);
    FOR(i,0,n-1)
    {
        dp[i]=x[i].time;
        FOR(j,0,i)
        {
            if(x[j].e<=x[i].b)
                dp[i]=max(dp[j]+x[i].time,dp[i]);
        }
        res=max(res,dp[i]);
    }
    cout<<res<<endl;
}
