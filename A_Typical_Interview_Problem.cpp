#include <iostream>
#include <string>
using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int k;
        cin >> k;
        string fb = "FBFFBFFBFB";
        string s;
        cin >> s;
        bool ans = false;
        for (int i = 0; i < 10-k; i++) {
            if (fb.substr(i, k) == s) {
                ans = true;
                cout << "YES" << endl;
                break;
            }
        }
        if (!ans) cout << "NO" << endl;
    }
    return 0;
}