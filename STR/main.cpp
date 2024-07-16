#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define FILL(name,x) memset(name,x,sizeof(name))
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("STR.inp","r",stdin);
    freopen("STR.out","w",stdout);
    string s;
    cin>>s;
    ll cnt=0;
    FOR(i,0,s.size()-1)
        if(s[i]-'0'==0||s[i]-'0'==1)
            cnt++;
    cout<<s.size()-cnt<<endl;
}
