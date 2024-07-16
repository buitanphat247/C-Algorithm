#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int a[n];
    for (auto &i : a)
        cin >> i;

    int minDist = 1e9;
    sort(a, a + n);
    for (int i = 0; i < n - 1; ++i)
        minDist = min(minDist, abs(a[i] - a[i + 1]));

    cout << minDist;
}
