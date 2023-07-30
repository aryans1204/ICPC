#include <bits/stdc++.h>

using namespace std;

int slowFib(int n) {
  vector<int> fibs;
  fibs.push_back(0);
  fibs.push_back(1);
  for (int i = 2; i <= n; i++) {
    fibs.push_back(fibs[i-2]+fibs[i-1]);
  }
  return fibs[n];
}
pair<int, int> fib(int n) {
  if (n == 0) return {0, 1};

  auto p = fib(n >> 1);
  int c = p.first*(2*p.second-p.first);
  int d = p.first*p.first + p.second*p.second;
  if (n & 1) {
    return {d, c+d};
  }
  return {c, d};
}
int main()
{
  int n;
  cin >> n;
  auto p = fib(n);
  cout << p.first << " " << p.second << endl;
  cin >> n;
  cout << slowFib(n) << " " << endl;
}
