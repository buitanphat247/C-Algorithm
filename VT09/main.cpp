#include<bits/stdc++.h>
using namespace std;
bool ktnt(int so)
{
    if(so<2) return false;
    for(int i=2; i<=sqrt(so); i++) if(so%i==0) return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        sort(a,a+n);
        if(a[i]==a[i+1]) a[i]=0;
        if(ktnt(a[i])) cout<<a[i]<<" ";
    }
    return 0;
}
