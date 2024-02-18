#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("taxi.inp", "r", stdin);
    freopen("taxi.out", "w", stdout);
    long long n;
    cin >> n;
    long long s, total = 0;
    map<long long, long long> count;
    for (long long i = 0; i < n; i++)
    {
        cin >> s;
        count[s]++;
    }
    total += count[4];
    total += count[3];
    if (count[1] >= count[3])
        count[1] -= count[3];
    else
        count[1] = 0;
    total += count[2] / 2;
    if (count[2] % 2 == 1)
    {
        total++;
        if (count[1] >= 2)
            count[1] -= 2;
        else if (count[1] == 1)
            count[1] = 0;
    }
    total += (count[1] + 3) / 4;

    cout << total << endl;

    return 0;
}
