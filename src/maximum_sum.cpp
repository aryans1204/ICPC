#include <bits/stdc++.h>
#include <cmath>

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
    sort(a.begin(), a.end());
    vector<long long> pr(n+1, 0);
    for (int i = 0; i < n; i++) {
      pr[i+1] = pr[i]+a[i];
    }
    long long ans = 0;
    for (int i = 0;i <= k; i++) {
      ans = max(ans, pr[n-(k-i)] - pr[2*i]);
    }

    cout << ans << endl;
  }
  return 0;
}
