#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define usl unsigned long long
#define ld long double
#define pb push_back
#define is insert
#define fs first
#define sc second
long long min_subarray_length(long long n, long long s, const vector<long long>& arr)
{
    long long left = 0;
    long long min_length = INT_MAX;
    long long current_sum = 0;

    for (long long right = 0; right < n; ++right)
    {
        current_sum += arr[right];

        while (current_sum >= s)
        {
            min_length = min(min_length, right - left + 1);
            current_sum -= arr[left];
            left += 1;
        }
    }

    return (min_length != INT_MAX) ? min_length : 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("SUB.inp", "r", stdin);
    freopen("SUB.out", "w", stdout);
    long long n, s;
    cin >> n >> s;

    vector<long long> arr(n);
    for (long long i = 0; i < n; ++i)
        cin >> arr[i];

    long long result = min_subarray_length(n, s, arr);

    cout << result << endl;

    return 0;

}
