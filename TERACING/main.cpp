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
struct vt
{
    ll value,cnt;
};
int main()
{
    fast;
    READ("TERACING");
    ll n,k,count=0;
    cin>>n>>k;
    ll x[n+1];
    FILL(x,0);
    map<ll,ll>mp;
    FOR(i,1,n)
    {
        cin>>x[i];
        mp[x[i]]++;
    }
    vector<vt> arr;
    vector<ll>a1;
    FOR(i,1,n)
    {
        if(mp[x[i]]!=0)
        {
            arr.push_back({x[i], mp[x[i]]});
            a1.pb(x[i]);
            mp[x[i]]=0;
        }
    }
    sort(arr.begin(),arr.end(),[](const vt&a , const vt&b){return a.value<b.value;});
    sort(a1.begin(),a1.end());
    FOR(i,0,arr.size()-1)
    {
        ll idx=upper_bound(a1.begin(),a1.end(),a1[i]+k)-a1.begin()-1;
        if(idx<arr.size())
        {
            if(a1[idx]==a1[i]+k)
            {
                count+=arr[i].cnt*arr[idx].cnt;
            }
        }
    }
    cout<<count<<endl;
}
