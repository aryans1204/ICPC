#include <bits/stdc++.h>
using namespace std;

int ceil(int n, int k) {
  if (n % k == 0) return n / k;
  return (int) (n / k) + 1;
}
int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n, k;
    cin >> n >> k;
    cout << min(n, 2*ceil(n, k)) << endl;
  }
}
