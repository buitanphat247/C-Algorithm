#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second


using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("COUNTPRD.inp", "r", stdin);
    freopen("COUNTPRD.out", "w", stdout);
    long long N;
    cin >> N;

    set<long long> factors;

    while (N % 2 == 0)
    {
        factors.insert(2);
        N /= 2;
    }

    for (long long i = 3; i * i <= N; i += 2)
    {
        while (N % i == 0)
        {
            factors.insert(i);
            N /= i;
        }
    }

    if (N > 2)
    {
        factors.insert(N);
    }
    cout<<factors.size()<<endl;

    return 0;
}
