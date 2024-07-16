#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    long long ans = -1e9;
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int j = i; j < n; j++) {
            sum += x[j];
            ans = max(sum, ans);
        }
    }
    cout << ans << endl;
    return 0;
}
