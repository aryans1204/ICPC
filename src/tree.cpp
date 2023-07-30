#include <bits/stdc++.h>

using namespace std;

void dfs(int root, int p, vector<int>& cnt, vector<vector<int>> g) {
    if (g[root].size() == 1 && g[root][0] == p) {
      cnt[root] = 1;
    }
    else {
      for (auto u : g[root]) {
        if (u != p) {
          dfs(u, p, cnt, g);
          cnt[root] += cnt[u];
        }
      }
    }
}

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int n;
    cin >> n;
    vector<vector<int>> g(n, vector<int>());
    for (int i = 0; i < n-1; i++) {
      int u, v;
      cin >> u >> v;
      u--; v--;
      g[u].push_back(v);
      g[v].push_back(u);
    }
    vector<int> cnt(n, 0);
    dfs(0, -1, cnt, g);
    int q;
    cin >> q;
    int x, y;
    for (int i = 0; i < q; i++) {
        cin >> x >> y;
        cout << cnt[x]*cnt[y] << endl;
    }
  }
}
