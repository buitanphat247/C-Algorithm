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
    long long n, m;
    cin >> n >> m;
    long long TWO = 0, ONE = 0;
    if (n < m)
        cout << "-1" << endl;
    else
    {

        if (n % 2 == 0)
        {
            TWO = n / 2;
            while ((TWO + ONE) % m != 0)
            {
                TWO--,ONE += 2;
            }
            cout << TWO + ONE << endl;
        }
        else
        {
            TWO = (n - 1) / 2;
            ONE = 1;
            while ((TWO + ONE) % m != 0)
            {
                TWO--,ONE += 2;
            }
            cout << TWO + ONE << endl;
        }
    }
}
