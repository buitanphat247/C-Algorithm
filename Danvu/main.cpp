#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
const long long nmax=1e6;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n;
    cin>>n;
    vector<long long>prime,isprime(nmax,true);
    isprime[1]=isprime[0]=false;
    for(long long i=2;i*i<=nmax;i++)
        if(isprime[i])
            for(long long j=i*i;j<=nmax;j+=i)
                isprime[j]=false;
    for(long long i=2;i<=nmax;i++)
        if(isprime[i])prime.pb(i);
    map<long long,long long>mp;
    for(long long i=0;i<prime.size();i++)
    {
            while(n%prime[i]==0)
            {
                n/=prime[i];
                mp[prime[i]]++;
            }
    }
    for(auto it:mp)
        cout<<it.first<<" "<<it.second<<endl;
}
