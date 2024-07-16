#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("INPUT.txt","r",stdin);
    freopen("OUTPUT.txt","w",stdout);

    int n;
    cin >> n;
    int a[10000];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int temp = sizeof(a) / sizeof(a[0]);
    sort(a, a + n, greater<int>());

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
