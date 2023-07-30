#include <bits/stdc++.h>
using namespace std;

typedef long double ll;
int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n, d, h;
    cin >> n >> d >> h;
    vector<int> y(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> y[i];
    }
    if (n == 1) {
      cout << 0.5*d*h << endl;
      continue;
    }
    ll ans = 0;
    for (int i = n-1; i >= 1; i -= 2) {
      if (y[i] - y[i-1] >= h) {
        ans += d*h;
      }
      else {
        ans += d*h;
        ans -= (h-y[i]-y[i-1])*(h-y[i]-y[i-1]);
      }
    }
    if (n%2) {
      if (y[1] - y[0] >= h) ans += 0.5*d*h;
      else {
        ans += 0.5*d*h; 
        ans -= (h-y[1]-y[0])*(h-y[1]-y[0]);
      }
    }
    cout << ans << endl;
  }
}
