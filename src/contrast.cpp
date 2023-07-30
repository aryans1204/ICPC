#include <bits/stdc++.h>
using namespace std;

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
    if (n == 1) {
      cout << 1 << endl;
      continue;
    }
    else if (n == 2) {
      if (a[0] == a[1]) cout << 1 << endl;
      else cout << 2 << endl;
      continue;
    }

    int ans = 0;
    int j = 0;
    for (int i = 1; i < n-1; i++) {
      if (abs(a[i]-a[j])+abs(a[i]-a[i+1]) == abs(a[j]-a[i+1])) ans++;
      else j = i;
    }
    if (a[0] == a[n-1] && (n-ans == 2)) ans++;
    cout << n-ans << endl;
  }
}
