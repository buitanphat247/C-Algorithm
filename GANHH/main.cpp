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
ll sum_digit(ll n)
{
    ll sum=0;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            if(i!=n/i)
                sum+=i+n/i;
            else sum+=i;
        }
    }
    return sum;
}
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll n;
    cin>>n;
    ll cnt=0;
    FOR(i,1,n)
    {
        ll x;
        cin>>x;
        if(x!=1)
            if(sum_digit(x)<2*x)
                cnt++;
    }
    cout<<cnt<<endl;
}
