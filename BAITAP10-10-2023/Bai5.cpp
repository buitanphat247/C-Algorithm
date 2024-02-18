#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,k;
    cin>>k;
    while(k--)
    {
        cin>>n;
        cout<<n*(n-1)<<endl;
    }
}
