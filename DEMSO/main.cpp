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

int main()
{
    fast();
    READ("demso");
    ll a,b,c;
    cin>>a>>b>>c;
    ll count_number=b-a+1;
    if(a%c==0)
    {
        cout<<count_number-(b/c-a/c+1)<<endl;
    }
    else
    {
        cout<<count_number-(b/c-a/c)<<endl;
    }
}
