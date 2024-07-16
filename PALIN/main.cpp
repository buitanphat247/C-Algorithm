#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) a[i][j] = 1;
            else a[i][j] = 0;
        }
    }

    for(int k = 2; k <= n; k++) {
        for(int i = 0; i < n - k + 1; i++) {
            int j = i + k - 1;
            a[i][j] = max(a[i + 1][j], a[i][j - 1]);
            if(s[i] == s[j]) {
                if(k == 2) a[i][j] = 2;
                else {
                    a[i][j] = a[i + 1][j - 1] + 2;
                }
            }
        }
    }
    cout << a[0][n - 1];
    return 0;
}
