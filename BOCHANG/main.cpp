#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define fe(name_file,tus,type) freopen(name_file,tus,type);
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define FillChar(a,x) memset(a,x,sizeof(a))
int main()
{
    fast;
    ll n;
    cin >> n;
    vector<ll>x(n);
    FOR(i, 0, n - 1)cin >> x[i];
    sort(x.begin(), x.begin() + n);
    reverse(x.begin(), x.end());
    ll r = x.size() - 1, i = 1,count=0;
    while (x.size() != 1)
    {
        x[i - 1] += x[i];
        x.erase(x.begin() + i);
        r = x.size() - 1;
        x[r]--,count++;
        if (x[r] == 0)
        {
            x.erase(x.begin() + r);
        }
    }
    cout << count << endl;
}
