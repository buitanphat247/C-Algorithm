#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
#define pii pair<long long,long long>
const long long N= 1e6;
vector<pii>ans;
long long n,m,x,y;
long long a[N],b[N];
long long tknp(long long l,long long r, long long k)
{
    long long pos=0;
    while(l<=r)
    {
        long long mid=(l+r)/2;
        if(k<a[mid]-x)r=mid-1;
        else if(a[mid]+y<=k)l=mid+1;
        else{
            pos=mid;
            r=mid-1;
        }
    }
    return pos;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("SELESHIRT.inp", "r", stdin);
    freopen("SELESHIRT.out", "w", stdout);
    cin>>n>>m>>x>>y;
    for(long long i=1;i<=n;i++)cin>>a[i];
    for(long long i=1;i<=m;i++)cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    long long p=1;
    for(long long j=1;j<=m;j++)
    {
        long long i=tknp(p,n,b[j]);
        if(i>0)ans.push_back({i,j});
        p=i+1;
    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
        cout<<it.first<<" "<<it.second<<endl;
}
