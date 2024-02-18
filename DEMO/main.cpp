#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
const long long N =1e7;
long long a[N];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n;
    cin>>n;
    for(long long i=1;i<=n;i++)cin>>a[i];
    vector<long long>x;
    for(long long i=1;i<=n;i++)
    {
        long long j=lower_bound(x.begin(),x.end(),a[i])-x.begin();
        if(j>=x.size())x.push_back(a[i]);
        else x[j]=a[i];
    }
    cout<<x.size()<<endl;
}
