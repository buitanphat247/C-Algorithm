#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define READ(name) freopen(name".inp","r",stdin); freopen(name".out","w",stdout);
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
int main()
{
    fast();
    READ("1");
    ll n;
    ld sum=0;
    cin>>n;
    FOR(i,1,n)
        sum+=(float)1/(i*(i+1));
    cout<<fixed<<setprecision(5)<<sum<<endl;
}
