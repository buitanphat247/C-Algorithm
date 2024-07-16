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
struct gps
{
    string a;
    char value;
};
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll t;
    vector<gps> v(16);
    v[0].a="0000",v[0].value='0';
    v[1].a="0001",v[1].value='1';
    v[2].a="0010",v[2].value='2';
    v[3].a="0011",v[3].value='3';
    v[4].a="0100",v[4].value='4';
    v[5].a="0101",v[5].value='5';
    v[6].a="0110",v[6].value='6';
    v[7].a="0111",v[7].value='7';
    v[8].a="1000",v[8].value='8';
    v[9].a="1001",v[9].value='9';
    v[10].a="1010",v[10].value='A';
    v[11].a="1011",v[11].value='B';
    v[12].a="1100",v[12].value='C';
    v[13].a="1101",v[13].value='D';
    v[14].a="1110",v[14].value='E';
    v[15].a="1111",v[15].value='F';
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string z="";
        for (ll i = 0; i < s.size(); ++i)
        {
            for(ll j = 0; j < v.size(); ++j)
            {
                if(v[j].value == s[i])
                {
                    z += v[j].a;
                    break;
                }
            }
        }
        ll index=0;
        while(z[index]=='0')
        {
            if(z.size()==1) break;
            z.erase(z.begin()+index);
        }
        cout << z << endl;
    }
    return 0;
}
