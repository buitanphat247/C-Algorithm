#include <bits/stdc++.h>
using namespace std ;

#define MAXN 100
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t ;
    cin >> t;
    while(t--)
    {
        int n ;
        cin >> n ;
        double s = 0 ;
        for(int i = 1 ; i <= n ; i++)
        {
            s = sqrt(s + 2);
        }
        cout << fixed << setprecision(5) << s << endl ;
    }
}
