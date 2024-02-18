#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("homework.inp","r",stdin);
    freopen("homework.out","w",stdout);
    long long n,k;
    cin>>n>>k;
    long long x[n];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    long long sum=0,cnt=0;
    sort(x,x+n);
    for(long long i=0;i<n;i++)
    {
        if(x[i]<=k)
            k+=x[i],cnt++;
    }
    cout<<cnt<<endl;
}
