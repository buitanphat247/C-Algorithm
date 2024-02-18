#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
long long maxPowerOfPInNFactorial(long long N, long long p) {
    long long result = 0;
    while (N > 0) {
        N /= p;
        result += N;
    }
    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long T;
    cin >> T;
    while (T--) {
        long long N, p;
        cin >> N >> p;
        long long maxPower = maxPowerOfPInNFactorial(N, p);
        cout << maxPower << endl;
    }

}
