#include <bits/stdc++.h>

#define N 1000000

using namespace std;

int h[N+2];

int n, ans;
long long M;

bool check(int k)
{
  long long s = 0;
  for (int i = 1; i <= n; i++)
    if (h[i] > k) s += h[i] - k;
  return (M <= s);
}

int main()
{
  freopen("wood.inp", "r", stdin);
  freopen("wood.out", "w", stdout);

  cin >> n >> M;
  for (int i = 1; i <= n; i++) cin >> h[i];
  int l = 1, r = *max_element(h+1, h+n+1);
  while (l <= r) {
    int mid = (l+r)/2;
    if (check(mid)) {
      ans = mid;
      l = mid+1;
    } else r = mid-1;
  }
  cout << ans;
  return 0;
}
