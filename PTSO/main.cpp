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
const ll nmax = 1e7;
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    vector<ll>isprime(nmax,true);
    vector<ll> prime;
    isprime[1] = isprime[0] = false;
    for (ll i = 2; i * i <= nmax; i++)
        if (isprime[i])
            for (ll j = i * i; j <= nmax; j += i)
                isprime[j] = false;

    for (ll i = 2; i <= nmax; i++)
        if (isprime[i])
            prime.pb(i);

    ll n;
    cin >> n;
    string s="";
    for (ll i = 0; i < prime.size(); i++)
    {
        while (n % prime[i] == 0)
        {
            s=s+to_string(prime[i])+"*";
            n/=prime[i];
        }
    }
    ll idx=s.size()-1;
    s.erase(s.begin()+idx);
    cout<<s<<endl;
}
