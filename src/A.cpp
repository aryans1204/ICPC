#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
      int n, m, k;
      cin >> n >> m >> k;
      vector<pair<int, int>> c(k);
      int x, y;
      cin >> x >> y;
      int xk, yk;
      for (int i = 0; i < k; i++) {
        cin >> xk >> yk;
        c[i] = make_pair(xk, yk);
      }
      bool ans = true;
      int x1, y1;
      for (int i = 0; i < k; i++) {
        x1 = abs(x-c[i].first);
        y1 = abs(y-c[i].second);
        if ((x1 == 1) && (y1 == 1)) {
          cout << "NO" << endl;
          ans = false;
          break;
        }
        if ((x1 % 2 == 0) && (y1 % 2 == 0)) {
          cout << "NO" << endl;
          ans = false;
          break;
        }
      }
      if (ans) {
        cout << "YES" << endl;
      }
    }
}
