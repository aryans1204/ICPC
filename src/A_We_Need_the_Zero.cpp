#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int val = 0;
        for (int i = 0; i < n; i++) {
            val = val^a[i];
        }
        if (n % 2 == 0) {
            if (val == 0 || n == 1) cout << 1 << endl;
            else cout << -1 << endl;
        }
        else {
            cout << val << endl;
        }
        
    }
}