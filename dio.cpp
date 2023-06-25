#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b, int& x, int& y) {
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  int x1, x2;
  int g = gcd(b, a%b, x1, x2);
  x = x2;
  y = x1-x2*(a/b);
  return g;
}

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
      int a, b, c;
      cin >> a >> b >> c;
      int x1, x2;
      int g = gcd(a, b, x1, x2);
      if (c % g) cout << "No" << endl;
      else cout << "Yes" << endl;
    }
    return 0;
}
