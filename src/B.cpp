#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
      int n, k;
      cin >> n >> k;
      vector<int> a(n);
      vector<int> c(k, 0);
      vector<int> dp(n, 0);
      for (int i = 0; i < n; i++) {
        cin >> a[i];
        c[a[i]] = i;
      }
      dp[n-1] = 0;
      for (int i = n-2; i >= 0; i--) {
        if (c[a[i]] == i+1) {
          dp[i] = dp[i+1];
        }
        else if (c[a[i]] == i) dp[i] = min(1+dp[i+1], n-i-1);
        else dp[i] = min(1+dp[i+1], c[a[i]]-i-1+dp[c[a[i]]]);
        c[a[i]] = i;
      }
      int ans = min(0, dp[0]-1);
      cout << ans << endl;
    }
}
