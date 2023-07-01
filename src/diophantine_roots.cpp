#include <bits/stdc++.h> 
using namespace std;

void shift_solution(int& x, int& y, int a, int b, int cnt) {
  x += cnt*b;
  y -= cnt*a; 
}

int find_solution(int a, int b, int& x, int& y) {
  int g;
  if (b == 0) {
    x = 1;
    y = 0;
    return a;
  }
  int x1, y1;
  g = find_solution(b, a%b, x1, y1);
  x = y1;
  y = x1-y1*(a/b);
  return g;
}

int main()
{
  int tests;
  for (cin >> tests; tests--;) {
    int a, b, c, x1, x2, y1, y2;
    cin >> a >> b >> c;
    x1 = y1 = 0;
    x2 = c/a;
    y2 = c/b;
    int x, y;
    int g = find_solution(a, b, x, y);
    if (c%g) cout << "No solution exists for this" << endl;
    else {
      a /= g;
      b /= g;
      int sign_a = a > 0 ? +1 : -1;
      int sign_b = b > 0 ? +1 : -1;
      shift_solution(x, y, a, b, (x1-x)/b);
      if (x < x1) {
        shift_solution(x, y, a, b, sign_a);
      }
      if (x > x2) {
        cout << "No solution found in the given range" << endl;
        continue;
      }
      int lx1 = x;

      shift_solution(x, y, a, b, (x2-x) / b);
      if (x > x2) {
        shift_solution(x, y, a, b, -sign_a);
      }
      if (x < x1) {
        cout << "No solution found in the given range" << endl;
        continue;
      }
      int rx1 = x;

      shift_solution(x, y, a, b, -(y1 -y)/a);
      if (y < y1) {
        shift_solution(x, y, a, b, -sign_b);
      }
      if (y > y2) {
        cout << "No solution found in the given range" << endl;
        continue;
      }
      int ly1 = y;

      shift_solution(x, y, a, b, -(y2-y)/a);
      if (y > y2) {
        shift_solution(x, y, a, b, sign_b);
      }
      if (y < y1) {
        cout << "No solution found in the given range" << endl;
        continue;
      }
      int ry1 = y;
      
      if (ly1 > ry1) {
        swap(ly1, ry1);
      }
      int l = max(lx1, ly1);
      int r = min(ry1, rx1);

      if (l > r) {
        cout << "No solution found in the given range" << endl;
      }

      cout << (r-l)/abs(b)+1 << endl;
      return 0;
    }
  }
}
