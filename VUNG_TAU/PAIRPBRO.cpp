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
#define READ(name_file) freopen(name_file".inp","r",stdin); freopen(name_file".out","w",stdout);
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define FILL(a,x) memset(a,x,sizeof(a))
const ll nmax=1e7;
int main()
{
    fast;
    READ("PAIRPBRO");
    vector<ll>isprime(nmax,true);
    isprime[0]=isprime[1]=false;
    for(ll i=2; i*i<=nmax; i++)
    {
        if(isprime[i])
        {
            for(ll j=i*i; j<=nmax; j+=i)
            {
                isprime[j]=false;
            }
        }
    }
    ll n,k,count=0;
    cin>>n>>k;
    for(ll i=2;i+k<=n;i++)
        if(isprime[i]&&isprime[i+k]) count++;
    cout<<count<<endl;
}
