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
    long long l=3,r=1000,a=5,b=9;
    long long t;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>a>>b;
        long long lcm_ab = (a*b)/__gcd(a,b);
        long long count =floor(r/a) - ceil((l-1)/a)+floor(r/b) - ceil((l-1)/b)-floor(r / lcm_ab) - ceil((l - 1) / lcm_ab);
        cout<<count<<endl;
    }
}
