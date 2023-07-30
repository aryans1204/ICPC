#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    int allneg = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] < 0) allneg++;
    }
    if (allneg == n) {
      cout << *max_element(a.begin(), a.end()) << endl;
      continue;
    }
    long long ods = 0;
    long long evs = 0;
    for (int i = 0; i < n; i++) {
      if (i & 1) ods += max(a[i], 0);
      else evs += max(a[i], 0);
    }
    cout << max(evs, ods) << endl;
  }
}
