#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("dragon.inp","r",stdin);
    freopen("dragon.out","w",stdout);
    long long n,k,cnt=0;
    cin>>k>>n;
    pair<long long,long long> x[n+1];
    for(long long i=1;i<=n;i++)
        cin>>x[i].first>>x[i].second;
    sort(x+1,x+n+1);
    for(long long i=1;i<=n;i++)
    {
        if(k<=x[i].first)
        {
            break;
        }
        else
            k+=x[i].second,cnt++;
    }
    if(cnt==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl<<n-cnt;
}
