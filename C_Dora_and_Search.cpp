#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> v(n+1, 0);
        int mn = 1;
        int mx = n;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        int l = 1;
        int r = n;
        bool works = true;
        while (l < r) {
            if (v[l] == mn) {
                mn++;
                l++;
            }
            else if (v[l] == mx) {
                mx--;
                l++;
            }
            else if (v[r] == mn) {
                mn++;
                r--;
            }
            else if (v[r] == mx) {
                mx--;
                r--;
            }
            else break;

        }
        if (l < r) cout << l << " " << r << endl;
        else cout << -1 << endl;
    }
    return 0;
}