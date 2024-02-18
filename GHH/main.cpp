#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
long long Sum_div(long long n)
{
  long long sum = 0;
  long long k = sqrt(n);
  for (long long i = 1; i <= k; i++)
  {
    if (n % i == 0)
    {
      if (i != n / i)
        sum += i + n / i;
      else
        sum += i;
    }
  }
  return 2*n<=sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("GHH.inp", "r", stdin);
    freopen("GHH.out", "w", stdout);
    long long n;
    cin>>n;
    while(n--)
    {
        long long k;
        cin>>k;
        cout<<Sum_div(k)<<endl;
    }
}
