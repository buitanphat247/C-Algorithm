#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
#define FILL(a,x) memset(a,x,sizeof(a))
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define READ(name) freopen(name".inp","r",stdin); freopen(name".out","w",stdout);
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
const ll nmax=1e7;
const ll vl=1e5;
int main()
{
    fast();
    READ("QUANTRONG");
    ll n,ans=0;
    cin>>n;
    vector<ll> a(nmax,0),pr(nmax,0);
    vector<ll> last_seen_number(vl,0);
    FOR(i,1,n)
    {
        cin>>a[i];
        pr[i]=pr[i-1]+a[i];
        if(last_seen_number[a[i]]==0)
            last_seen_number[a[i]]=i;
    }
    FOR(i,1,n)
    {
        ll last_number=last_seen_number[a[i]];
        if(i!=last_number)
            ans=max(ans,pr[i]-pr[last_number-1]);
    }
    cout<<ans<<endl;
}
