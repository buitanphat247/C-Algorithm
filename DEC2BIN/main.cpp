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
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s="";
        while(n!=0)
        {
            s=to_string(n%2)+s;
            n/=2;
        }
        cout<<s<<endl;
    }
}
