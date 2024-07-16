#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);

    int n;
    cin >> n;

    stack<int> v;
    while (n--) {
        int type;
        cin >> type;
        if (type == 1) {
            int x;
            cin >> x;
            v.push(x);
        } else if (type == 3) {
            if (v.empty()) {
                cout << "Empty!" << endl;
            } else {
                cout << v.top() << endl;
            }
        } else {
            if (!v.empty()) {
                v.pop();
            }
        }
    }

    return 0;
}
