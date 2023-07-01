#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int l, r, x;
        cin >> l >> r >> x;
        int a, b;
        cin >> a >> b;
        if (b >r || b < l) {
            cout << -1 << endl;
            continue;
        }
        if (a == b) {
            cout << 0 << endl;
            continue;
        }
        else if (abs(a-b) >= x) {
            cout << 1 << endl;
            continue;
        }
        else if (r-max(a, b) >= x || min(a, b)-l >= x) {
            cout << 2 << endl;
            continue;
        }
        else if ((r-b >= x && a-l >= x) || (r-a >= x && b-l >= x)) {
            cout << 3 << endl;
            continue;
        }
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}