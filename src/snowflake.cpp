#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n+1, 0);
    for (int i = 0; i < m; i++) {
      int x, y;
      cin >> x >> y;
      a[x]++; a[y]++;
    }
    sort(a.begin(), a.end());
    int j = n;
    if (a[n] != a[n-1]) j = n-1;
    int y = a[j]-1;
    int x = (n-1) / (y+1);
    cout << x << " " << y << endl;
  }
}
