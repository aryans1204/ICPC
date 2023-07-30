#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n;
    cin >> n;
    int temp = 0;
    int ans = 0;
    for (int i = 0; i < 30; i++) {
      if (n & 1) ans = temp;
      temp++;
      n >>= 1;
    }
    int k = (1 << ans) - 1;
    cout << k << endl;
  }
}
