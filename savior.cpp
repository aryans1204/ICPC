#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;
  return gcd(b, a%b);
}
int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  int g = gcd(a, b);
  if (c%g) cout << "No" << endl;
  else cout << "Yes" << endl;
  return 0;
}
