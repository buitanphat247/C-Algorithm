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
const ll nmax=1e3;
vector<ll>gp[nmax];
vector<bool>vs(nmax,false);
vector<ll>rs;
ll cmp=0;
void bfs(ll u)
{
    cmp++;
    queue<ll>q;
    q.push(u);
    vs[u] = true;
    rs.push_back(u);
    while(q.size()!=0)
    {
        ll k=q.front();
        q.pop();
        for(ll x:gp[k])
            if(!vs[x])
            {
                vs[x]=true;
                q.push(x);
                rs.push_back(x);
            }
    }
}
int main()
{
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll n,m;
    cin>>n>>m;
    for(ll i=1; i<=m; i++)
    {
        ll x,y;
        cin>>x>>y;
        gp[x].pb(y);
        gp[y].pb(x);
    }
    vector<string>t;
    for(ll i=1; i<=n; i++)
    {
        if(!vs[i])
        {
            string s="";
            bfs(i);
            s=s+to_string(rs.size());
            sort(rs.begin(),rs.end());
            for(auto it:rs)
                s=s+" "+to_string(it);
            t.pb(s);
        }
        rs.clear();
    }
    cout<<cmp<<endl;
    for(auto it:t)
        cout<<it<<endl;
}
