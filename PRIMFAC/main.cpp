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
#define auto_cout(name) for(auto it:name)
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    const ll nmax=1e6;
    ll isprime[nmax];
    FillChar(isprime,true);
    isprime[0]=isprime[1]=false;
    for (ll i = 2; i * i <= nmax; i++)
        if (isprime[i])
            for (ll j = i * i; j <= nmax; j += i)
                isprime[j] = false;
    vector<ll> prime;
    FOR(i,2,nmax)if(isprime[i])prime.pb(i);
    map<ll,ll>mp;
    ll n;
    cin>>n;
    FOR(i,0,prime.size()-1)
    {
        while(n%prime[i]==0)
        {
            mp[prime[i]]++;
            n/=prime[i];
        }
    }
    cout<<mp.size()<<endl;
    auto_cout(mp)
    cout<<it.first<<" "<<it.second<<endl;
}
