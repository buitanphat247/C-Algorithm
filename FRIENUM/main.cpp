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
struct vt
{
    ll num,idx,vl;
};
int main()
{
    fast;
    ll n;
    cin>>n;
    vt x[n];
    FOR(i,0,n-1)
    {
        cin>>x[i].num;
        x[i].idx=i;
        x[i].vl=0;
    }
    sort(x, x + n, [](const vt &a, const vt &b)
    {
        return a.num < b.num;
    });
    FOR(i,1,n-1)
    {
        if(x[i].num>x[i-1].num)
            x[i].vl=i;
        else if(x[i].num==x[i-1].num)
            x[i].vl=x[i-1].vl;
    }
    sort(x,x+n,[](const vt &a,const vt&b)
    {
        return a.idx<b.idx;
    });
    FOR(i,0,n-1)
    cout<<x[i].vl<<" ";
}
