#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n;
    cin >> n;

    vector<pair<long long, bool>> dp(n * 2);

    for (long long i = 0; i < n; i++) {
        cin >> dp[i].fs;
        dp[i].sc = true;
    }

    for (long long i = n; i < n * 2; i++) {
        cin >> dp[i].fs;
        dp[i].sc = false;
    }

    sort(dp.begin(), dp.end());

    long long cur = dp[0].sc, res = 0;

    for (long long i = 1; i < n * 2; i++) {
        if (dp[i].sc + cur == 1) {
            res++;
            cur = -1;
        } else {
            cur = dp[i].sc;
        }
    }

    cout << res << endl;

    return 0;
}
