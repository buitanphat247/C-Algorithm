#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second

const long long N = 1000;
long long a[N+2][N+2], b[N+2][N+2];
long long ans;

void tomau(long long m, long long n, long long r, long long c) {
    for (long long i = 1; i <= m - r + 1; i++) {
        for (long long j = 1; j <= n - c + 1; j++) {
            if (a[i][j] != b[i][j]) {
                ans++;
                for (long long k = i; k <= i + r - 1; k++) {
                    for (long long l = j; l <= j + c - 1; l++) {
                        a[k][l] = 1 - a[k][l];
                    }
                }
            }
        }
    }
}

bool check(long long m, long long n) {
    for (long long i = 1; i <= m; i++) {
        for (long long j = 1; j <= n; j++) {
            if (a[i][j] != b[i][j]) return false;
        }
    }
    return true;
}

void init(long long m, long long n) {
    for (long long i = 1; i <= m; i++) {
        for (long long j = 1; j <= n; j++) {
            a[i][j] = b[i][j] = 0;
        }
    }
}

int main() {
    freopen("PAINT.inp", "r", stdin);
    freopen("PAINT.out", "w", stdout);

    while (true) {
        long long m, n, r, c;
        cin >> m >> n >> r >> c;
        if (m == 0 && n == 0 && r == 0 && c == 0) break; 
        ans = 0;
        for (long long i = 1; i <= m; i++) {
            for (long long j = 1; j <= n; j++) {
                char x;
                cin >> x; 
                b[i][j] = x - '0';
            }
        }
        tomau(m, n, r, c);
        if (check(m, n) == true) cout << ans << '\n';
        else cout << "-1\n";
        init(m, n);
    }
    return 0;
}
