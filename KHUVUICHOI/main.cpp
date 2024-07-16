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
    READ("KHUVUICHOI");
    ll n,m;
    cin>>n>>m;
    ll count_h=0,sum=0;
    FOR(i,n+1,m)
    {
        if(i<=12)
        {
            if(count_h<4)
                sum+=6;
            else
                sum+=3;
            count_h++;
        }
        else
        {
            if(count_h<4)
                sum+=10;
            else
                sum+=5;
            count_h++;
        }
    }
    cout<<sum<<endl;
}
