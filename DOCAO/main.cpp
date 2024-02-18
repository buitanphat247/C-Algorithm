#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
const long long mod=1e7;
void snt(vector<long long>&v)
{
    vector<long long> isprime(mod,true);
    for(long long i=2; i*i<=mod; i++)
        if(isprime[i])
            for(long long j=i*i; j<=mod; j+=i)
                isprime[j]=false;
    for(long long i=2; i<=mod; i++)
        if(isprime[i]==true)
            v.push_back(i);
}
bool sum_digit_number_h(string number,long long k)
{
    long long sum=0;
    for(long long i=0;i<number.size();i++)
        sum+=number[i]-'0';
    return sum==k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("DOCAO.inp", "r", stdin);
    freopen("DOCAO.out", "w", stdout);
    long long n,h,count=0;
    vector<long long>v;
    cin>>n>>h;
    snt(v);
    for(long long i=0;i<v.size();i++)
        if(v[i]>n)break;
        else if(v[i]<=n&&sum_digit_number_h(to_string(v[i]),h)){
            count++;
            cout<<v[i]<<endl;
        }
    cout<<count<<endl;
}
