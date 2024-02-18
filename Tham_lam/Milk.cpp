#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second

struct cow
{
    long long a, b;
};

bool cmp(const cow &a, const cow &b)
{
    return a.a < b.a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("Milk.inp", "r", stdin);
    freopen("Milk.out", "w", stdout);
    long long n, m, res = 0, sum = 0;
    cin >> n >> m;
    cow x[m];
    for (long long i = 0; i < m; i++)
        cin >> x[i].a >> x[i].b;
    sort(x, x + m, cmp);
    for (long long i = 0; i < m; i++)
    {
        long long k = n - sum;
        if (x[i].b > k)
        {
            sum += k;
            res += (x[i].a * k);
            break;
        }
        else
        {
            sum += x[i].b;
            res += (x[i].a * x[i].b);
        }
    }
    cout << res << endl;

    return 0;
}
