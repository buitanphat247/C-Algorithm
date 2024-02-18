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
    long long x,y,n;
    long long t;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        if(n==1)
        {
            cout<<max(2*x,y)/min(2*x,y)<<endl;
        }
        else if(n==2)
        {
            cout<<max(2*x,2*y)/min(2*x,2*y)<<endl;
        }
        else
        {
            cout<<max(x*pow(2,n-1),y*pow(2,n-2))/min(x*pow(2,n-1),y*pow(2,n-2))<<endl;
        }
    }
}
