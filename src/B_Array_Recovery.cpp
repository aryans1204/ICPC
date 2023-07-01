#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> d(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> d[i];
        }
        bool ans = false;
        vector<int> v(n, 0);
        v[0] = d[0];
        for (int i = 1; i < n; i++) {
            if (v[i-1]-d[i] >= 0 && d[i]) {
                ans = true;
                break;
            }
            else {
                v[i] = v[i-1] + d[i];
            }
        }
        if (ans) cout << -1 << endl;
        else {
            for (int i = 0; i < n; i++) {
                cout << v[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}