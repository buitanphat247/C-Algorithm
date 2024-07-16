#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n, k;
    long int i, j, cnt=0;
    cin >> n >> k;
    if(k > n/2) cout << "-1";
    else if(k==0)
    {
        for(i=1; i<=n; i++) cout << i << " ";
    }
    else if(k==1)
    {
        if(n==2) cout << 2 << " " << 1;
        else if(n>=3) cout << "-1";
    }
    else
    {
        int q=0;
        for(i=1; i<=k; i++)
        {
            for(j=n+1-k; j<=n; j++)
            {
                if((j-i)%k==0 && ((j-i)/k)%2 == 0)
                {
                    q=1;
                    break;
                }
            }
            if(q==1)
            {
                cout << "-1";
                break;
            }
        }
        if(q==0)
        {
            for(i=1; i<=n; i++)
            {
                if(cnt/k % 2 == 0) cout << i+k << " ";
                else if(cnt/k % 2 == 1) cout << i-k << " ";
                cnt++;
            }
        }
    }
}
