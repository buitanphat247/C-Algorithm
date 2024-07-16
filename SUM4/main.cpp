#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long double sum=0;
        for(int i=1; i<=n; i++)
        {
            int ts =i*(i+1);
            sum+=(float)1/(ts/2);
        }
        cout<<fixed<<setprecision(10)<<sum<<endl;
    }
}
