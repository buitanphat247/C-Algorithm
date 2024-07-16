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
ll pow1(ll a,ll x)
{
    ll t=a;
    a=1;
    while(x--)
    {
        a*=t;
    }
    return a;
}
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        n=0;
        reverse(s.begin(),s.end());
        FOR(i,0,s.size()-1)
        if(s[i]=='1')
            n+=pow1(2,i);
        cout<<n<<endl;
    }
}
