#include <bits/stdc++.h>
using namespace std;
#define ll long long
const long long NMAX=1e6;
bool isPrime(ll number)
{
    if (number < 2) return false;
    if (number == 2 || number == 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    for (ll i = 5; i * i <= number; i += 6)
    {
        if (number % i == 0 || number % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DPRIME3.inp", "r", stdin);
    freopen("DPRIME3.out", "w", stdout);
    vector<long long>dp;
    for(long long i=2;i<=NMAX;i++)
        if(isPrime(i))
            dp.push_back(i);
    long long N;
    cin >> N;
    if(N<13)
        cout<<"-1"<<endl;
    else
    {
        long long x=2,y,z;
        for(long long i=0;i<NMAX;i++)
        {
            if(dp[i]>x)
            {
                y=dp[i];
                z=y*y+x*x;
                if(z>N)
                    break;
                if(isPrime(z))
                     cout << x << " " << y << " " << z << endl;
            }
        }
    }

    return 0;
}
