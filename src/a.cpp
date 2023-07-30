#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n, k;
    cin >> n >> k;
    int m = 0;
    int i = 0;
    int l = n;
    while (l) {
      if (l & 1) m = i;
      i++;
      l >>= 1;
    }
    int ans = 1 << k;
    if (m+1 <= k) cout << n+1 << endl;
    else cout << ans << endl;
  }
}
