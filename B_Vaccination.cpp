#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n, d, k, w;
        cin >> n >> k >> d >> w;
        vector<int> t(n+1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> t[i];
        }
        int choose = 0;
        int expiry = 0;
        int ans = 0;
        int i = 1;
        while (i <= n) {
            expiry = upper_bound(t.begin(), t.end(), t[i]+w) - t.begin() - 1;
            
            if (expiry < i) break;
            choose = i+min(expiry-i+1, k)-1;
            
            if (choose > n) break;
            ans++;
            if (expiry-i+1 < k) {
                int temp = upper_bound(t.begin(), t.end(), t[choose]+d) - t.begin() - 1;
                i = (temp == choose ? choose+1 : min(temp-choose+1, k-expiry+i-1)+1);
            }
            else {
                i = choose+1;
            }
        }
        cout << ans << endl;
    }
}