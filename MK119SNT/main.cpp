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

const ll nmax=1e6+100000;
ll t,l,r;
bool isprime[nmax];
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    FillChar(isprime,true);
    FOR(i,2,sqrt(nmax))
    {
        if(isprime[i])
            for(ll j=i*i; j<=nmax; j+=i)
                isprime[j]=false;
    }
    vector<ll>prime;
    FOR(i,2,nmax) if(isprime[i])prime.pb(i);
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        ll index_l = lower_bound(prime.begin(), prime.end(), l) - prime.begin();
        ll index_r = upper_bound(prime.begin(), prime.end(), r) - prime.begin();
        cout<<index_r-index_l<<endl;
    }
}
