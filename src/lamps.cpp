#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n;
    cin >> n;
    int a, b;
    vector<priority_queue<int>> q(n+1);
    vector<vector<int>> aq(n+1);
    for (int i = 1; i <= n; i++) {
      cin >> a >> b;
      aq[a].push_back(b);
    }
    long long ans = 0;
    for (int i = 1; i <= n; i++) {
      q[i] = priority_queue<int>(aq[i].begin(), aq[i].end());
      int temp = i;
      while (!q[i].empty() && temp--) {
        ans += q[i].top();
        q[i].pop();
      }
    }
    cout << ans << endl;
  }
}
