#include<bits/stdc++.h>
#include <vector>
#define ll long long
#define pb push_back
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define RFOR(i,l,r) for(ll i=r,i>=l;i--)
#define READ(name) freopen(name".inp","r",stdin);freopen(name".out","w",stdout);
#define FILL(name,x) memset(name,x,sizeof(name))
const ll nmax=1e6;
using namespace std;
int main()
{
    READ("1");
    ll x,sum=0;
    ll t=3;
    while(t--)
    {
        cin>>x;
        switch(x)
        {
        case 1:
            sum += 6;
            break;
        case 2:
            sum += 5;
            break;
        case 3:
            sum += 4;
            break;
        case 4:
            sum += 3;
            break;
        case 5:
            sum += 2;
            break;
        case 6:
            sum += 1;
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}
