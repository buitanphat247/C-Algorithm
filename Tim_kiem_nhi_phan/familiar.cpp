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
long long n;
long long a[N];
bool check(long long k)
{
   for(long long i=1;i<=k-1;i++)
    if(a[i]+i>a[k]+n) return false;
   return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("familiar.inp", "r", stdin);
    freopen("familiar.out", "w", stdout);
    cin>>n;
    for(long long i=0;i<n;i++)cin>>a[i];
    long long l=1,r=n,ans;
    while(l<=r)
    {
        long long mid=(l+r)/2;
        if(check(mid))
        {
            ans=mid;
            l=mid+1;
        }else r=mid-1;
    }
    cout<<ans<<endl;
}
