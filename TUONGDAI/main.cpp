#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n;
    long long x[n+1];
    long long dp[n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++){
        cin>>x[i];
        dp[i]=dp[i-1]+x[i];
    }
    cin>>k;
    while(k--)
    {
        int l, r;

        cin>>l>>r;
        cout<<dp[r]-dp[l-1]<<" ";
    }
}
