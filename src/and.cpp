#include <bits/stdc++.h>
using namespace std;

int main() {
  int tests;
  for (cin >> tests; tests--;) {
    int n;
    cin >> n;
    int x = n;
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x |= x >> 32;
    cout << x << endl;

    cout << (n ^ x) << endl;
  }
}
