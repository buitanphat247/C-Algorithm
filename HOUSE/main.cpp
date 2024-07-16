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
    ll t,ans=0;
    cin>>t;
    string s;
    cin>>s;
    ll l = 0, r = 1;
    while (l != s.size())
    {
        if (s[l] == s[r])
        {
            r++;
        }
        else
        {
            string z = s;
            if(r-l>=2)
            {
                ll num=z.substr(l, r - l).size();
                if(num%2==0)
                {
                    ans+=num/2;
                }
                else
                {
                    ans+=(num-1)/2;
                }
            }
            l = r;
            r++;
        }
    }
    cout<<ans<<endl;

}
