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
    ll a=0,d=0,z=0;
    FOR(i,1,n)
    {
        ll x;
        cin>>x;
        if(x<0)a++;
        else if(x>0)d++;
        else z++;
    }
    if(a==0&&d==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        if(z!=0)
            cout<<-1<<endl;
        else
        {
            if(a>d)
                cout<<d<<endl;
            else if(a<d)
                cout<<a<<endl;
            else if(a==d)
                cout<<a<<endl;
        }
    }

}
