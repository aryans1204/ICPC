#include <bits/stdc++.h>
using namespace std;

long long binary_exp(int a, int b) {
  //calculates a^b using binary exponentation method
  long long res = 1;
  while (b > 0) {
    if (b & 1) {
      res = res * a;
    }
    a = a*a;
    b >>= 1;
  }
  return res;
}
int main()
{
   long long a = 3;
   long long b = 1300;
   cout << "ans: " << binary_exp(a, b) << endl;
   long long ans = 1;
   for (int i = 0; i < 1300; i++) {
    ans = ans * 3;
   }
   cout << "ans: " << ans << endl;
   return 0;
}
