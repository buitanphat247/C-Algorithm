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
    freopen("FRIEND.inp", "r", stdin);
    freopen("FRIEND.out", "w", stdout);
    long long n,k,cnt=0;
    cin>>n>>k;
    vector<long long>x(n);
    for(long long i=0;i<n;i++)
        cin>>x[i];
    sort(x.begin(),x.end());
    map<long long,long long>mp;
    for(long long i =0;i<n;i++)
    {
        auto it = mp.find(abs(k-x[i]));
        if(it!=mp.end()) cnt += it->second;
        mp[x[i]]++;
    }
    cout<<cnt<<endl;
}
