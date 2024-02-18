#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
vector<long long>prime;
const long long nmax=1e7;
bool isPrime(int num)
{
    if (num < 2)
        return false;
    if (num == 2 || num == 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    return true;
}
void snt()
{
    vector<bool>isprime(nmax,true);
    for(long long i=2; i*i<=nmax; i++)
        if(isprime[i])
            for(long long j=i*i; j<=nmax; j+=i)
                isprime[j]=false;
    for(long long i=2; i<=nmax; i++)
        if(isprime[i]) prime.push_back(i);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("PRIMATR.inp", "r", stdin);
    freopen("PRIMATR.out", "w", stdout);
    snt();
    long long n,m;
    cin>>n>>m;
    long long dp[n][m],res=1e9;
    for(long long i=0; i<n; i++)
    {
        bool check_prime_rols=true;
        long long row_cost=0;
        for(long long j=0; j<m; j++)
        {
            cin>>dp[i][j];
            if(!binary_search(prime.begin(),prime.end(),dp[i][j]))
            {
                long long lower1=lower_bound(prime.begin(),prime.end(),dp[i][j])-prime.begin();
                row_cost+=abs(prime[lower1]-dp[i][j]);
            }
        }
        res=min(res,row_cost);
    }
    for (long long j = 0; j < m; j++)
    {
        long long col_cost = 0;
        for (long long i = 0; i < n; i++)
        {
            if(!binary_search(prime.begin(),prime.end(),dp[i][j]))
            {
                long long lower1=lower_bound(prime.begin(),prime.end(),dp[i][j])-prime.begin();
                col_cost+=abs(prime[lower1]-dp[i][j]);
            }
        }
        res=min(res,col_cost);
    }
    cout<<res<<endl;
}
