#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
      return a;
    }
    return gcd(b, a%b);
}
int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int m = 0;
    int i = 0;
    while (i < n-i-1) {
      m = gcd(m, abs(a[i]-a[n-i-1]));
      i++;
    }
    cout << m << endl;
  }
}
