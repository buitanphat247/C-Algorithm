#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
const long long N = 100;
using namespace std;
long long t;
char a[N+2][N+2];
bool check (char x, long long i, long long j)
{
    if(x==a[i-1][j])return false;
    if(x==a[i][j-1])return false;
    if(x==a[i+1][j])return false;
    if(x==a[i][j+1])return false;
    return true;
}
int main()
{
    freopen ("ALPHABET.inp","r", stdin);
    freopen ("ALPHABET.out", "w", stdout);
    cin >> t;
    for (long long test = 1; test <= t; test++)
    {
        long long n;
        cin >> n;
        for (long long i=1; i<=N; i++)
            for (long long j=1; j<=N; j++) a[i][j]='.';
        for (long long i=1; i<=n; i++)
            for (long long j=1; j<=n; j++) cin >> a[i][j];
        for (long long i=1; i<=n; i++)
            for (long long j=1; j<=n; j++)
                if (a[i][j]=='.')
                {
                    for (char x = 'A'; x <= 'Z'; x++)
                        if(check (x, i,j))
                        {
                            a[i][j]= x;
                            break;
                        }
                }
        cout << "Case " << test << ":" << endl;
        for (long long i=1; i<=n; i++)
        {
            for (long long j=1; j<=n; j++) cout << a[i][j];
            cout << endl;
        }
    }
}
