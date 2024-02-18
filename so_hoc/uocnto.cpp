#include <bits/stdc++.h>
using namespace std;
#define ll long long

const long long nmax = 1e6 + 2;

vector<bool> isPrime(nmax, true);
vector<ll> dp(nmax, 0);
vector<ll> numFactors(nmax, 0);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (long long i = 2; i * i <= nmax; i++) {
        if (isPrime[i]) {
            for (long long j = i * i; j <= nmax; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (long long i = 1; i <= nmax; i++) {
        for (long long j = i; j <= nmax; j += i) {
            numFactors[j]++;
        }
    }

    for (long long i = 1; i <= nmax; i++) {
        dp[i] = isPrime[numFactors[i]] + dp[i - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("Uocnto.inp", "r", stdin);
    freopen("Uocnto.out", "w", stdout);

    sieve();

    long long t;
    cin >>t;

    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << dp[b] - dp[a - 1] << endl;
    }

    return 0;
}
