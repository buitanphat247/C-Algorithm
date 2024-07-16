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
#define FILL(a,x) memset(a,x,sizeof(a))

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v;

    for(ll i = 0; i < n; i++) {
        string num;
        cin>>num;
        bool check=false;
        if(num[0]=='-')
            num.erase(num.begin()+0),check=true;
        vector<ll> dp;
        for(char c : num) dp.pb(c - '0');
        if(check)
        {
            if(dp[0]==0)
            {
                ll j=0;
                while(dp[j]-'0'!=0)
                {
                    j++;
                    if(dp[j]-'0'!=0)
                    {
                        swap(dp[j],dp[0]);
                        break;
                    }
                }
            }
            sort(dp.begin()+1, dp.end());
        }
        else sort(dp.begin(), dp.end(), greater<ll>());
        ll znum = 0;
        for(ll j = 0; j < dp.size(); j++)
            znum = znum * 10 + dp[j];
        if(check) znum *= -1;
        v.pb(znum);
    }

    sort(v.begin(), v.end(), greater<ll>());
    for(ll i = 0; i < n; i++)
        cout << v[i] << " ";
    return 0;
}
