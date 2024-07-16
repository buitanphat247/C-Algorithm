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
const ll mod=2023;

int main()
{
    fast;
    READ("MULTIPLE");
    ll n,d;
    cin>>n>>d;
    ll ans=1,cur_number=1;
    FOR(i,2,n)
    {
        cur_number=((cur_number%mod)*(d%mod))%mod;
        ans=((ans%mod)+(cur_number%mod))%mod;
    }
    cout<<ans<<endl;
}
