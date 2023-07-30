#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n, m, h;
    cin >> n >> m >> h;

    vector<vector<int>> t(n+1, vector<int>(m, 0));
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> t[i][j];
      }
      sort(t[i].begin(), t[i].end());
    }

    long long rsum = 0;
    int points = 0;
    int sum = 0;
    int k = 0;
    while (k < m && (t[1][k]+sum <= h)) {
      sum += t[1][k++];
      rsum += sum;
      points++;
    }
    int ans = 1;
    for (int i = 2; i <= n; i++) {
      long long asum = 0;
      sum = 0;
      int ap = 0;
      k = 0;
      while (k < m && (t[i][k]+sum <= h)) {
        sum += t[i][k++];
        asum += sum;
        ap++;
      }
      if (ap > points) ans++;
      else if (ap == points) {
        if (asum < rsum) ans++;
      }
    }
    cout << ans << endl;
  }


}
