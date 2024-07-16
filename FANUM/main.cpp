#include <bits/stdc++.h>
using namespace std;
unsigned long long n,a[1000001],i,f[1000001],s,d=0;
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        f[a[i]]++;
    }
    for(i=1; i<=n; i++)
    {
        if(f[a[i]]==1) d++;
    }
    cout<< d ;
}
