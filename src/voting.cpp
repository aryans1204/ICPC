#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  int tests;
    for (cin >> tests; tests--;) {
      int n, m;
      cin >> n >> m;
      if (n == 1 || m == 1) {
        cout << "YES" << endl;
        continue;
      }
      if (n <= m) {
        cout << "NO" << endl;
        continue;
      }
      bool ans = true;
      for (int i = 2; i*i <= n; i++) {
        if (!(n%i)) {
          while (!(n%i)) {
            if (i <= m) {
              ans = false;
              break;
            }
            n /= i;
          }
        }
      }
      if (ans) cout << "YES" << endl;
      else cout << "NO" << endl;
    }
}
