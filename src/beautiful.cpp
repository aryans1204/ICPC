#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long n, long long MOD) {
  long long ans = 1;
  a %= MOD;
  while (n) {
    if (n&1) {
      ans = ans*a%MOD;
    }
    a = a*a%MOD;
    n >>= 1;
  }
  return ans;
}
bool good(long long n, int a, int b) {
  int t;
  while (n) {
    t = n%10;
    if (t != b && t != a) return false;
    n /= 10;
  }
  return true;
}
int main()
{
  int a, b, n;
  long long MOD = 1e9+7;
  cin >> a >> b >> n;
  vector<long long> fact(n+1);
  fact[0] = 1;
  for (int i = 1; i <= n; i++) {
    fact[i] = (i*fact[i-1])%MOD;
  }
  long long ans = 0;
  long long sum;
  for (int i = 0; i <= n; i++) {
    sum = a*i + b*(n-i);
    if (good(sum, a, b)) {
      ans += fact[n]*(binpow(fact[n-i]*fact[i]%MOD, MOD-2, MOD));
      ans %= MOD;
    }
  }
  cout << ans << endl;
}
