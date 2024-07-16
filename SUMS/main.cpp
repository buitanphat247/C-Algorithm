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

int main() {
    fast;
    fe("1.inp","r",stdin);
    fe("1.out","w",stdout);
    ll n, s;
    cin >> n >> s;
    ll x[n];
    FOR(i, 0, n - 1) cin >> x[i];

    bool dp[s + 10];
    FillChar(dp, false);
    dp[0] = true;
    FOR(i, 0, n - 1) {
        for (ll j = s; j >= x[i]; j--) {
            if (dp[j - x[i]]) dp[j] = true;
        }
    }
    if(dp[s])
        cout<<"TRUE"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
