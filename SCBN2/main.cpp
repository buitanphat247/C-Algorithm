#include <bits/stdc++.h>
using namespace std;

#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i=0 ; i < n ; i=i+1)
    {
        cin >>a[i];

    }
    ll dem=0;
    sort (a,a+n);
    for (int i=0 ; i <n ; i=i+1)
    {
        for (int j=i+1; j<n; j=j+1)
        {

            if (a[i]==a[j])
            {
                dem=dem+1;
            }
            else
            {
                break;
            }
        }
    }
    cout << dem;

}
int main()
{
    solve();
}
