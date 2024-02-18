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
    freopen("TROCHOI.inp", "r", stdin);
    freopen("TROCHOI.out", "w", stdout);
    long long n;
    cin >> n;
    vector<long long> v1(n),v2(n);
    for (long long i = 0; i < n; i++)
        cin>>v1[i];
    for (long long i = 0; i < n; i++)
        cin>>v2[i];
    sort(v2.begin(),v2.end());
    long long res = abs(v1[0] + v2[0]);
    for(long long i=0; i<n; i++)
    {
        long long k=v1[i]*-1;
        long long j=lower_bound(v2.begin(),v2.begin()+v2.size(),k)-v2.begin();
        if (0 <= j && j < n && abs(v1[i] + v2[j]) < res)
            res = abs(v1[i] + v2[j]);
        if (0 <= j-1 && j-1 < n && abs(v1[i] + v2[j-1]) < res)
            res = abs(v1[i] + v2[j-1]);
    }
    cout<<res<<endl;
    return 0;
}
