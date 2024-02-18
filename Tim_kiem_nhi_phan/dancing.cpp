#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second

long long cnt(vector<long long> a, vector<long long> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    long long count = 0,index=-1;
    for (long long i = 0; i < a.size(); i++) {
        long long j = upper_bound(b.begin()+index+1, b.end(), a[i]) - b.begin();
        if(j<b.size())
            count++,index=j;
        else break;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DANCING.inp", "r", stdin);
    freopen("DANCING.out", "w", stdout);
    long long n;
    cin >> n;
    vector<long long> x1, y1, x2, y2;
    for (long long i = 0; i < n; i++) {
        long long k;
        cin >> k;
        if (k > 0)
            x1.push_back(abs(k));
        else
            x2.push_back(abs(k));
    }
    for (long long i = 0; i < n; i++) {
        long long k;
        cin >> k;
        if (k > 0)
            y1.push_back(abs(k));
        else
            y2.push_back(abs(k));
    }
    cout << cnt(x1, y2) + cnt(y1, x2) << endl;

    return 0;
}
