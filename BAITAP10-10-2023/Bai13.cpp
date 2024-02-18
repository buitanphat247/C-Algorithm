#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
vector<long long> v;
long long create_four(long long i)
{
    long long num = 0;
    for (long long j = 0; j < i; j++)
        num = num * 10 + 4;
    return num;
}
void backtrack(string number, long long index) {
    if (index == number.size()) {
        v.push_back(stoi(number));
        return;
    }
    string number1 = number;
    number1[index] = '7';
    backtrack(number1, index + 1);
    string number2 = number;
    number2[index] = '4';
    backtrack(number2, index + 1);
}
void create_number()
{
    for (long long i = 1; i < 10; i++)
    {
        string number = to_string(create_four(i));
        backtrack(number, 0);
    }
    sort(v.begin(), v.end());
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    create_number();
    long long t;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        cout<<v[n-1]<<endl;
    }
}

// bai 13