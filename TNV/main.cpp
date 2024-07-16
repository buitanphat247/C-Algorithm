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
int main()
{
    fast;
    ll n;
    cin>>n;
    map<ll,ll>mp;
    FOR(i,1,n){
        ll x;
        cin>>x;
        mp[x]++;
    }
    ll res=0,cnt=-1e9;
    for(auto it:mp)
        if(it.second>=cnt)
            cnt=it.second,res=max(it.first,res);
    cout<<res<<" "<<cnt<<endl;
}
