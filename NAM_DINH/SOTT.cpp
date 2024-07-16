#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define pb push_back
#define FOR(i,l,r) for(ll i=l;i<=r;i++)
#define READ(name) freopen(name".inp","r",stdin); freopen(name".out","w",stdout);
#define fast() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
ll sum_digit(ll number)
{
    ll sum=0;
    FOR(i,1,sqrt(number))
    {
        if(number%i==0)
        {
            if(i!=number/i)
            {
                sum+=i+number/i;
            }else{
                sum+=i;
            }
        }
    }
    return sum;
}
int main()
{
    fast();
    READ("SOTT");
    ll n,m;
    cin>>n>>m;
    ll digit_n=sum_digit(n);
    ll ucln_ts_ms_n=__gcd(digit_n,n);
    ll ts_n=digit_n/ucln_ts_ms_n;
    ll ms_n=n/ucln_ts_ms_n;

    ll digit_m=sum_digit(m);
    ll ucln_ts_ms_m=__gcd(digit_m,m);
    ll ts_m=digit_m/ucln_ts_ms_m;
    ll ms_m=m/ucln_ts_ms_m;
    if(ts_m==ts_n&&ms_n==ms_m)
        cout<<ts_n<<endl<<ms_n<<endl;
    else cout<<-1<<endl;
}
