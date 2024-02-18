#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,k;
    cin>>n;
    while(n--)
    {
        cin>>k;
        k==1&&cout<<6<<endl;
        k==2&&cout<<5<<endl;
        k==6&&cout<<1<<endl;
        k==5&&cout<<2<<endl;
        k==3&&cout<<4<<endl;
        k==4&&cout<<3<<endl;
    }
}
