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
const ll mod=1e9+7;
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll n,d;
    cin>>n>>d;
    ll sum=1;
    ll cur_num=1;
    FOR(i,2,n)
    {
        cur_num=((cur_num%mod)*(d%mod))%mod;
        sum=((sum%mod)+(cur_num%mod))%mod;
    }
    cout<<sum<<endl;
}
