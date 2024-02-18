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
    long long T;
    cin >> T;
    while (T--)
    {
        long long N;
        cin >> N;

        if (N % 2 == 0)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}
