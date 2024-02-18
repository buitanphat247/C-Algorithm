#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
bool cmp(long long a,long long b)
{
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DISCOUNT.inp", "r", stdin);
    freopen("DISCOUNT.out", "w", stdout);
    long long n;
    cin>>n;
    long long x[n];
    for(long long i=0;i<n;i++) cin>>x[i];
    sort(x,x+n,cmp);
    long long sum=0,cnt=0;
    for(long long i=0;i<n;i++)
    {
        if((i+1)%3==0)
            sum+=x[i];
    }
    cout<<sum<<endl;
}
