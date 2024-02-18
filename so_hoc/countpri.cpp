#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int t, a, b;
int x[N];
bool check_prime(int y)
{
    if(y<2)
        return false;
    for(int i = 2; i<=sqrt(y); i++)
        if(y%i == 0)
            return false;
    return true;
}
void solve(int j)
{
    x[j] = x[j-1];
    if(check_prime(j) == true)
        x[j]++;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("COUNTPRI.inp", "r", stdin);
    freopen("COUNTPRI.out", "w", stdout);
    x[1] = 0; x[2] = 1; x[3] = 2; x[0] = 0;
    for(int i = 4; i<= 1000000; i++)
        solve(i);
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        cout << x[b]-x[a-1] << "\n";
    }
    return 0;
}
