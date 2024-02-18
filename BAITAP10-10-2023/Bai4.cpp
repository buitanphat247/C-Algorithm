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
        long long cnt=0;
        while(n>0)
        {
            n%2==1&&cnt++;
            n/=2;
        }
        cnt%2==0?cout<<"even"<<endl
                     :
                     cout<<"odd"<<endl;
    }
}
