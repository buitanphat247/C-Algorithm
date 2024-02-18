#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
bool cmp(long long a, long long b)
{
    return a<b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("find.inp", "r", stdin);
    freopen("find.out", "w", stdout);
    long long n;
    cin >> n;
    if (n == 0)
    {
        cout << 10 << endl;
        return 0;
    }
    vector<long long> v;
    for (long long i = 9; i >= 2; --i)
    {
        while (n % i == 0)
        {
            v.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        cout << "-1" << endl;
        return 0;
    }
    sort(v.begin(), v.end(), cmp);
    for (long long i = 0; i < v.size(); i++)
        cout << v[i];

    return 0;
}
