#include <iostream>
#include <cmath>
using namespace std;

// Function to find the largest odd divisor of n
long long largestOddDivisor(long long n) {
    long long ans = -1e9;
    for (long long i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i != n / i) {
                if (i % 2 != 0 && i != n)
                    ans = max(ans, i);
                if ((n / i) % 2 != 0 && (n / i) != n)
                    ans = max(ans, n / i);
            } else {
                if (i % 2 != 0 && i != n)
                    ans = max(ans, i);
            }
        }
    }
    return ans;
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long res=largestOddDivisor(n);
        if(res==-1e9)
            cout <<1<<endl;
        else cout<<res<<endl;
    }
    return 0;
}
