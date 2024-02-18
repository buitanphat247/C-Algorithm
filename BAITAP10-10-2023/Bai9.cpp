#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second

long long sumOfDigits(long long number)
{
    long long sum = 0;
    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long t;
    long long number;
    cin>>t;
    while(t--)
    {
        cin >> number;
        while (number >= 10)
        {
            number = sumOfDigits(number);
        }
        cout<<number<<endl;
    }
}
// bai 9