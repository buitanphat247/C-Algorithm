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
vector<ll>x(nmax,0);
ll count_wood(ll h,ll n)
{
    ll sum_h=0;
    FOR(i,1,n)
    {
        if(x[i]>=h)
            sum_h+=x[i]-h;
    }
    return sum_h;
}
int main()
{
    fast();
    READ("PINOC");
    ll n,k;
    cin>>n>>k;
    FOR(i,1,n)
        cin>>x[i];
    sort(x.begin()+1,x.begin()+1+n);
    ll l=0,r=x[n],ans=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        ll count_slice_wood=count_wood(mid,n);
        if(count_slice_wood>=k)
        {
            ans=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}
