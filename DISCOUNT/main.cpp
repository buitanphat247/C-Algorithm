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
    ll n;
    cin>>n;
    ll x[n+10];
    FOR(i,1,n)
    cin>>x[i];
    sort(x+1,x+1+n);
    ll l=1,r=n,sum=x[l],cnt=1;
    l=2;
    bool check[n+10];
    FillChar(check,false);
    while(l<=r)
    {
        if(cnt>=2)
        {
            check[r]=true;
            r--;
            cnt=0;
        }
        if(cnt<2)
        {
            if(check[l]==false)
            {
                check[l]=true;
                sum+=x[l];
            }
            l++;
            cnt++;
        }
    }
    cout<<sum<<endl;
}
