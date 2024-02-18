#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
const long long N = 1000000;
long long C[N],n;
long long A[N];
bool check(long long k)
{
    memset(C,0,sizeof(C));
    for(long long i=1;i<=k;i++)
        C[A[i]+1000]++;
    for(long long i=k+1;i<n;i++)
    {
        if(C[A[i-k]+1000]>0)
            C[A[i-k]+1000]--;
    }
    for(long long i=1;i<=2000;i++)
        if(C[i]>0)return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("RANNUM.inp", "r", stdin);
    freopen("RANNUM.out", "w", stdout);
    cin>>n;
    for(long long i=0;i<n;i++)cin>>A[i];
    long long l=1,r=n,ans;
    while(l<=r)
    {
        long long mid=(l+r)/2;
        if(check(mid))
        {
            ans=mid;
            r=mid-1;
        }else l=mid+1;
    }
    cout<<ans<<endl;
}
