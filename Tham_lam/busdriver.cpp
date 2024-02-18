#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
bool cmp(long long a, long long b){
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("Busdriver.inp", "r", stdin);
    freopen("Busdriver.out", "w", stdout);
    while(true)
    {
        long long n,d,r;
        cin>>n>>d>>r;
        if(n==0&&d==0&&r==0)return 0;
        long long am[n],pm[n];
        for(long long i=0;i<n;i++)cin>>am[i];
        for(long long i=0;i<n;i++)cin>>pm[i];
        sort(am,am+n);
        sort(pm,pm+n,cmp);
        long long result=0;
        for(long long i=0;i<n;i++)
            if(am[i]+pm[i]>d)result+=((am[i]+pm[i])-d)*r;
        cout<<result<<endl;
    }
}
