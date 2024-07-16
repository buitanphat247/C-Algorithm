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
    READ("NTMAX");
    vector<ll>isprime(nmax,true);
    isprime[0]=isprime[1]=false;
    for(ll i=2; i*i<=nmax; i++)
    {
        if(isprime[i])
        {
            for(ll j=i*i; j<=nmax; j+=i)
                isprime[j]=false;
        }
    }
    string s;
    cin>>s;
    ll count_number=0,prime_max=0;
    FOR(i,0,s.size()-1)
    {
        if(s[i]-'0'>=0&&s[i]-'0'<=9)
        {
            count_number++;
        }
    }
    ll number=0;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]-'0'>=0&&s[i]-'0'<=9)
        {
            number=number*10+s[i]-'0';
        }
        else
        {
            if(number!=0)
            {
                if(isprime[number])
                    prime_max=max(prime_max,number);
            }
            number=0;
        }
    }
    if(number!=0)
    {
        if(isprime[number])
            prime_max=max(prime_max,number);
    }
    cout<<count_number<<endl;
    cout<<prime_max<<endl;
    return 0;
}
