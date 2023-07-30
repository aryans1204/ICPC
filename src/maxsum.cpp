#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n, k;
    vector<int> a(n, 0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> p(n, 0);
    p[0] = a[0];
    long long ans = 0;
    for (int i = 1; i < n; i++) {
      p[i] = a[i] + p[i-1];
    }
    for (int m = 0; m <= k; m++) {
      ans = max(ans, p[n-k+m]-p[2*m]);
    }
    cout << ans << endl;
  }
}
