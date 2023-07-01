#include <iostream>
#include <vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n, 0);
        int x;
        vector<ll> pref(n+1, 0);
        vector<int> prefmax(n+1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> x;
            pref[i] = pref[i-1] + x;
            prefmax[i] = max(prefmax[i-1], x);
        }
        int y;
        for (int i = 0; i < q; i++) {
            cin >> y;
            int ind = upper_bound(prefmax.begin(), prefmax.end(), y)-prefmax.begin();
            cout << pref[ind-1] << " ";
        }
        cout << endl;
    }
    return 0;
}