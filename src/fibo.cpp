#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  int tests;
  for (cin >> tests; tests--;) {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
      int second = n;
      int first = i;
      bool valid_seq = true;
      for (int j = 0; j < k-2; j++) {
        int fx = first;
        first = second-fx;
        second = fx;
        valid_seq &= first <= second;
        valid_seq &= min(first, second) >= 0;
        if (!valid_seq) break;
      }
      if (valid_seq) ans++;
    }
    cout << ans << endl;
  }
}
