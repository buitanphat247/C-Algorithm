#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
const long long NMAX=1e5;
void sang_STG(){
    for(long long i=1;i<=NMAX;i++)
        v.push_back((i*(i+1))/2);
}
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,k;
    cin>>k;
    sang_STG();
    while(k--)
    {
        cin>>n;
        if(binary_search(v.begin(),v.end(),n)==true)
            cout<<"1"<<endl;
        else
        cout<<"0"<<endl;
    }
}
