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
    freopen("tile.inp", "r", stdin);
    freopen("tile.out", "w", stdout);
    long long n, i, d, j, tmp;
    cin >> n;
    long long x[n];
    for (i = 0; i < n; i++)
        cin >> x[i];
    sort(x,x+n);
    d = 0;
    for (i = 0; i < n; i++)
        if (d <= x[i]) d++;
    cout << d << endl;

    return 0;
}
