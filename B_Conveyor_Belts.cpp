#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n, x1, y1, x2, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        int b1 = n-min(min(x1-1, n-x1), min(y1-1, n-y1));
        int b2 = n-min(min(x2-1, n-x2), min(y2-1, n-y2));
        cout << min(min(b1, b2)-1+n-max(b1, b2), abs(b1-b2)) << endl;
    }
}