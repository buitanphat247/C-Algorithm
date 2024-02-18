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
map<ll, ll> primes;
void primeFact(ll n)
{
    while (n % 2 == 0)
    {
        n = n / 2;
        primes[2]++;
    }
    for (ll i = 3; i <= sqrt(n); i += 2)
        while (n % i == 0)
        {
            n = n / i;
            primes[i]++;
        }
    if (n > 2) primes[n]++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("uocso.inp", "r", stdin);
    freopen("uocso.out", "w", stdout);
    ll a,b,t;
    cin>>t;
    while(t--)
    {
        cin >> a >> b;
        primeFact(a);
        primeFact(b);
        ll ans = 1;
        map<ll, ll>::iterator iter = primes.begin();
        while (iter != primes.end())
        {
            ans *= (iter->second + 1);
            ++iter;
        }
        cout << ans<<endl;
        primes.clear();
    }
    return 0;
}
