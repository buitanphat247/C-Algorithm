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
const long long num_max=1e9;
const long long nmax = 1e7;
vector<long long> primes;

void snt() {
    vector<bool> is_prime(nmax, true);
    for (long long i = 2; i * i <= nmax; i++)
        if (is_prime[i])
            for (long long j = i * i; j <= nmax; j += i)
                is_prime[j] = false;
    for (long long i = 2; i <= nmax; i++)
        if (is_prime[i])
            primes.push_back(i);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("TPRIME.inp", "r", stdin);
    freopen("TPRIME.out", "w", stdout);
    snt();
    long long n, k;
    cin >> n >> k;
    vector<long long> arr(n), dp(n + 1, 0);
    long long min_total_cost = num_max;
    for (long long i = 0; i < n; ++i) {
        cin >> arr[i];
        long long lower1 = lower_bound(primes.begin(), primes.end(), arr[i]) - primes.begin();
        long long lower2 = lower_bound(primes.begin(), primes.end(), arr[i]) - primes.begin() - 1;
        long long a = (lower1 < primes.size()) ? abs(primes[lower1] - arr[i]) : num_max;
        long long b = (lower2 >= 0) ? abs(arr[i] - primes[lower2]) : num_max;
        long long res = min(a, b);
        dp[i + 1] = dp[i] + res;
        if (i + 1 >= k) {
            min_total_cost = min(min_total_cost, dp[i + 1] - dp[i + 1 - k]);
        }
    }

    cout << min_total_cost << endl;

    return 0;
}
