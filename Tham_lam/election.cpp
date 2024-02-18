#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
bool cmp(long long a,long long b)
{
    return a>b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("election.inp", "r", stdin);
    freopen("election.out", "w", stdout);
    long long n,m;
    cin>>n>>m;
    long long x[n];
    for(long long i=0; i<n; i++)
        cin>>x[i];
    sort(x,x+n,cmp);
    long long sum = x[0], cnt = 1,check=false;
    if(m == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (long long i = 1; i < n; i++)
    {
        long long k = m - sum;
        if (k > 0)
            sum += x[i] - 1, cnt++;
        else
        {
            check = true;
            break;
        }
    }
    if(check==true)
        cout << cnt << endl;
    else
        cout << "-1" << endl;
}
