#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n, x;
    cin >> n >> x;
    vector<int> a(n, 0);
    vector<int> b(n, 0);
    vector<int> c(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> c[i];
    }
    int mask = ~(x);
    int ans = 0;
    bool cor = true;
    int i, j, k;
    i = j = k = 0;
    while (ans != x && (i < n || j < n || k < n)) {
      if (i < n && ((a[i] & mask) == 0)) {
        ans |= a[i++];
      }
      else if (j < n && ((b[j] & mask) == 0)) {
        ans |= b[j++];
      }
      else if (k < n && ((c[k] & mask) == 0)) {
        ans |= c[k++];
      }
      else {
        cor = false;
        break;
      }
    }
    if (cor && (ans == x)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}
