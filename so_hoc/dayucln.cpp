#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("dayucln.inp", "r", stdin);
    freopen("dayucln.out", "w", stdout);
    long long t;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        vector<long long>v(n),dp;
        for(long long i=0; i<n; i++)
            cin>>v[i];
        dp.push_back(v[0]);
        for(long long i=1; i<n; i++)
            dp.push_back((v[i]*v[i-1])/__gcd(v[i],v[i-1]));
        dp.push_back(v[n-1]);
        for(auto it:dp)
            cout<<it<<" ";
        cout<<endl;
    }
}
