#include <bits/stdc++.h>
using namespace std;
long long sumOfDigits(long long num) {
    long long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool check(long long x, long long N) {
    return x * x + sumOfDigits(x) * x - N == 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("SOLVE.INP", "r", stdin);
    freopen("SOLVE.OUT", "w", stdout);
    long long N;
    cin >> N;
    for (long long i = 1; i <= 9 * log10(N) + 1; ++i) {
        long long low = pow(10, i - 1);
        long long high = pow(10, i) - 1;
        while (low <= high) {
            long long mid = (low + high) / 2;
            if (check(mid, N)) {
                cout << mid << endl;
                return 0;
            } else if (mid * mid + sumOfDigits(mid) * mid - N < 0) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    cout << "-1" << endl;
    return 0;
}
