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
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<long long>x(n),y(n);
        long long res=-1e9;
        for(long long i=0; i<n*2; i++)
        {
            if(i<n)
                cin>>x[i];
            else
                cin>>y[i];
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        for(long long i=0; i<n; i++)
            res=max(res,abs(x[i]-y[i]));
        cout<<res<<endl;
    }
}
