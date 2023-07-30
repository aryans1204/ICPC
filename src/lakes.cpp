#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> v(n, vector<bool>(m, false));
    vector<vector<int>> l(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> l[i][j];
      }
    }
    vector<vector<int>> dp(n, vector<int>(m, 0));
    dp[n-1][m-1] = l[n-1][m-1];
    for (int i = m-2; i >= 0; i--) {
      dp[n-1][i] = l[n-1][i] > 0 ? dp[n-1][i+1] + l[n-1][i] : 0;
      v[n-1][i] = true;
    }
    for (int j = n-2; j >= 0; j--) {
      dp[j][m-1] = l[j][m-1] > 0 ? dp[j+1][m-1] + l[j][m-1] : 0;
      v[j][m-1] = true;
    }
    int ans = l[n-1][m-1];
    for (int i = n-2; i >= 0; i--) {
      for (int j = m-2; j >= 0; j--) {
        v[i][j] = true;
        if (!l[i][j]) dp[i][j] = 0;
        else {
          dp[i][j] = l[i][j];
          if (!v[i+1][j]) dp[i][j] += dp[i+1][j];
          if (!v[i][j+1]) dp[i][]
        };
        ans = max(ans, dp[i][j]);
      }
    }
    cout << ans << endl;
  }
}
