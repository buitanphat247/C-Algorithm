#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("FRACTION.inp", "r", stdin);
    freopen("FRACTION.out", "w", stdout);
    long long b, n, a = 1, k, dem = 1;
    cin >> b >> n;
    k = b;

    for (long long i = 2; i * i <= k; i++) {
        if (k % i == 0) {
            long d = 0;
            while (k % i == 0) {
                k /= i;
                d++;
            }
            if (d % 2 != 0) {
                a *= i;
            }
        }
    }
    a *= k;

    long long x = round(sqrt(a * b));

    for (long long i = 1; i * i * a < b; i++) {
        long long p = x * i * n;
        if (p % b == 0) {
            dem++;
            if (n > p / b) {
                dem++;
            }
        }
    }

    cout << dem<<endl;

    return 0;
}
