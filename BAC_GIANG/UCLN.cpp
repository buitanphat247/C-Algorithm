#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define READ(name) freopen(name".inp","r",stdin);freopen(name".out","w",stdout);
#define FILL(name,x) memset(name,x,sizeof(name))
#define pb push_back
const ll nmax=1e6;
int main()
{
    fast();
    READ("UCLN");
    ll n,m;
    cin>>n>>m;
    cout<<__gcd(n,m)<<endl;
    return 0;
}
