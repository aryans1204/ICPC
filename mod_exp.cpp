#include <bits/stdc++.h>

using namespace std;

long long binpow(int x, int y) {
  long long res = 1;
  while (y > 0) {
    if (y & 1) {
      res = res * x;
    }
    x = x*x;
    y >>= 1;
  }
  return res;
}
int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int x, y;
    cin >> x >> y;
    cout << binpow(x%10, y) << endl;
  }
}
