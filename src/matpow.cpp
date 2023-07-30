#include <bits/stdc++.h>

using namespace std;

struct matrix {
  long long mat[2][2];
  matrix friend operator *(const matrix& a, const matrix& b) {
    matrix c;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        c.mat[i][j] = 0;
        for (int k = 0; k < 2; k++) {
          c.mat[i][j] += a.mat[i][k] * b.mat[k][j];
        }
      }
    }
    return c;
  }
  matrix friend operator %(const matrix& a, long long MOD) {
    matrix c = a;
    for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
        c.mat[i][j] = c.mat[i][j] % MOD;
      }
    }
    return c;
  }

};

matrix matpow(matrix a, long long n, long long m) {
  a = a%m;
  matrix ans = {{
    {1, 0},
    {0, 1}
  }};
  while (n) {
    if (n & 1) {
      ans = ans*a%m;
    }
    a = a*a%m;
    n >>= 1;
  }
  return ans;
}

long long fib(long long n, long long MOD) {
  matrix ans = {{
    {1, 1},
    {1, 0}
  }};

  return matpow(ans, n, MOD).mat[0][1];
}

int main()
{
  long long n;
  long long MOD = 1e9+7;
  cin >> n;
  cout << fib(n, MOD) << endl;
}
