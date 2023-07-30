#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<int> dp(k+1, 0);
    vector<int> l(k+1, n);
    vector<int> c(k+1, 0);
    for (int i = n-1; i >= 0; i--) {
      dp[a[i]] = max(dp[a[i]], l[a[i]]-i-1);
      l[a[i]] = i;
      if (dp[a[i]] == l[a[i]]-i-1) c[a[i]]++;
    }
    int ans = dp[1];
    for (int i = 1; i <= k; i++) {
      dp[i] = max(dp[i], l[i]);
      if (dp[i] == l[i]) c[i]++;
      if (c[i] <= 2) dp[i]--;
      ans = min(ans, dp[i]);
    }
    
    cout << max(0, ans-1) << endl;
  }
}
