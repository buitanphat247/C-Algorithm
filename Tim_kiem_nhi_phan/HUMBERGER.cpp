#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
bool canMake(long long x, string formula, long long nb, long long ns, long long nc, long long pb, long long ps, long long pc, long long r) {
    long long needed_bread = max(0LL, x * count(formula.begin(), formula.end(), 'B') - nb) * pb;
    long long needed_sausage = max(0LL, x * count(formula.begin(), formula.end(), 'S') - ns) * ps;
    long long needed_cheese = max(0LL, x * count(formula.begin(), formula.end(), 'C') - nc) * pc;
    long long total_cost = needed_bread + needed_sausage + needed_cheese;
    return total_cost <= r;
}

long long binarySearch(string formula, long long nb, long long ns, long long nc, long long pb, long long ps, long long pc, long long r) {
    long long low = 0, high = 1e13, result = 0;

    while (low <= high) {
        long long mid = (low + high) / 2;
        if (canMake(mid, formula, nb, ns, nc, pb, ps, pc, r)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("HUMBERGER.inp", "r", stdin);
    freopen("HUMBERGER.out", "w", stdout);
    string formula;
    long long nb, ns, nc, pb, ps, pc;
    long long r;
    cin >> formula;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    long long result = binarySearch(formula, nb, ns, nc, pb, ps, pc, r);
    cout << result << endl;

    return 0;
}
