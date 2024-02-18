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
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long a, b, s;
    cin >> a >> b >> s;
    long long distance = abs(a) + abs(b);
    if (s >= distance && (s - distance) % 2 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
