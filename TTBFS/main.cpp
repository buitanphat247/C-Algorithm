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
const ll nmax=1e4;
vector<ll>gp[nmax];
vector<ll>vs(nmax,false),ans;
void bfs(ll u)
{
    //them dinh vao hang doi
    queue<ll>q;
    // danh dau dinh da duoc tham
    vs[u]=true;
    q.push(u);
    ans.pb(u);
    //buoc lap
    while(q.size()!=0)
    {
        ll k=q.front();
        q.pop();
        //duyet dinh ke
        for(ll x:gp[k])
            if(!vs[x])
            {
                vs[x]=true;
                ans.pb(x);
                q.push(x);
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
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        gp[x].push_back(y);
        gp[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
        if (!vs[i])
            bfs(i);
    for (int x : ans)
    {
        cout << x << '\n';
    }
}
