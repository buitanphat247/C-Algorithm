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
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    FOR(i,1,n)cin>>a[i];
    FOR(i,1,m)cin>>b[i];
    sort(a+1,a+n+1);
    FOR(i,1,m){
        if(binary_search(a+1,a+1+n,b[i]))
        {
            cout<<lower_bound(a+1,a+1+n,b[i])-a<<" ";
        }else cout<<0<<" ";
    }
}
