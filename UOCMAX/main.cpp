#include<bits/stdc++.h>
#include <vector>
#define ll long long
#define pb push_back
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define RFOR(i,l,r) for(ll i=r,i>=l;i--)
#define READ(name) freopen(name".inp","r",stdin);freopen(name".out","w",stdout);
#define FILL(name,x) memset(name,x,sizeof(name))
const ll nmax=1e7;
using namespace std;
int main()
{
    //READ("1");
    vector<ll>isprime(nmax,true);
    isprime[0]=isprime[1]=false;
    for(ll i=2; i*i<=nmax; i++)
    {
        if(isprime[i])
            for(ll j=i*i; j<=nmax; j+=i)
                isprime[j]=false;
    }
    vector<ll> prime;
    FOR(i,2,nmax)
    if(isprime[i])prime.pb(i);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,res=-1e9;
        cin>>n;
        FOR(i,0,prime.size()-1)
        {
            while(n%prime[i]==0)
            {
                res=max(res,prime[i]);
                n/=prime[i];
            }
        }

        cout<<res<<endl;
    }
    return 0;
}
