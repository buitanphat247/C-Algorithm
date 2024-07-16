#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define READ(name) freopen(name".inp","r",stdin);freopen(name".out","w",stdout);
#define FILL(name,x) memset(name,x,sizeof(name))
#define pb push_back
#define FOR(i,l,r) for(ll i=l;i<=r;i++)

const ll nmax=1e7;
int main()
{
    fast();
    READ("CHIAK");
    ll n,k;
    cin>>n>>k;
    ll x[n+1],pr[n+1],count=0;
    FILL(pr,0);
    FILL(x,0);
    FOR(i,1,n){
        cin>>x[i];
        pr[i]=pr[i-1]+x[i];
    }
    FOR(i,2,n)
    {
        FOR(j,1,i)
        {
            ll ans=pr[i]-pr[j-1];
            if(ans%k==0)
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
