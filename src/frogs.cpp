#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    vector<long long> c(n+1, 0);
    vector<long long> mx(n+1, 0);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] <= n) c[a[i]]++;
    }
    int i;
    long long ans = 0;
    for (i = 1; i <= n; ++i) {
      for (int j = i; j <= n; j += i) {
          mx[j] += c[i];
      }
    }

    cout << *max_element(mx.begin(), mx.end()) << endl;

  }
}
