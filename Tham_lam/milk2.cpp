#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b)
{
    return a>b;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("milk2.inp","r",stdin);
    freopen("milk2.out","w",stdout);
    long long n;
    cin>>n;
    long long x[n];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n,cmp);
    long long sum=0,cnt=0;
    for(long long i=0;i<n;i++)
    {
        if(i==0)
            sum+=x[i];
        else if(i>=1)
        {
            long long res=0;
            if(x[i]-cnt<=0)res=0;
            else res=x[i]-cnt;
            sum+=res;
        }
        cnt++;
    }
    cout<<sum<<endl;
}
