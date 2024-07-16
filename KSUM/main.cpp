#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long x[n+1],dp[n+1];
    memset(dp,0,sizeof(dp));
    for(long long i=1;i<=n;i++)
    {
        cin>>x[i];
        dp[i]=x[i]+dp[i-1];
    }
    long long sum=0;
    for(long long i=k;i<=n;i++)
    {
        sum=max(dp[i]-dp[i-k],sum);
    }
    cout<<sum<<endl;
}
