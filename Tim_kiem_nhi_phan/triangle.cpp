#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
bool isTriangle(long long a, long long b, long long c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return false;
    if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("TRIANGLE.inp", "r", stdin);
    freopen("TRIANGLE.out", "w", stdout);
    long long n;
    cin >> n;
    vector<long long> A(n), B(n), C(n);
    for (long long i = 0; i < n; ++i)
        cin >> A[i];
    for (long long i = 0; i < n; ++i)
        cin >> B[i];
    for (long long i = 0; i < n; ++i)
        cin >> C[i];
    long long count = 0;
    sort(C.begin(),C.end());
    for (long long i = 0; i < n; ++i)
    {
        for (long long j = 0; j < n; ++j)
        {
            long long k1=upper_bound(C.begin(),C.begin()+n,abs(A[i]-B[j]))-C.begin();
            long long k2=lower_bound(C.begin(),C.begin()+n,abs(A[i]+B[j]))-C.begin()-1;
            if(k1<=k2)count+=(k2-k1+1);
        }
    }
    cout << count << endl;
}
