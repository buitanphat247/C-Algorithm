#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);

    ll n;
    cin >> n;

    unordered_map<ll, ll> mp;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    set<ll> printed;
    cout << mp.size() << endl;
    for (ll i = 0; i < n; i++) {
        if (printed.find(arr[i]) == printed.end()) {
            cout << arr[i] << " " << mp[arr[i]] << endl;
            printed.insert(arr[i]);
        }
    }

    return 0;
}
