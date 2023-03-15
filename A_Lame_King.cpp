#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int a, b;
        cin >> a >> b;
        if (a == b) {
            cout << 2*abs(a) << endl;
            continue;
        }
        if (a == 0) {
            cout << 2*abs(b)-1 << endl;
            continue;
        }
        if (b == 0) {
            cout << 2*abs(a)-1 << endl;
            continue;
        }

        else cout << 2*max(abs(a), abs(b))-1 << endl;
    }
}