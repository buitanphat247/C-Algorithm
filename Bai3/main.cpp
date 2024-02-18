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
    long long t;
    long long n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if(x>=10)
            cout<<0<<endl;
        else
            cout<<abs(10-x)*(n-1)<<endl;
    }
}
