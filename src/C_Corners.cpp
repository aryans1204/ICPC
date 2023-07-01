#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > a(n, vector<int>(m, 0));
        string s;
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> s;
            for (int j = 0; j < m; ++j) {
                a[i][j] = s[j]%48;
                sum += a[i][j];
            }
        }
        int ans = 1e9;
        for (int i = 0; i < n-1; ++i) {
            for (int j = 0; j < m-1; ++j) {
                int count = a[i][j]+a[i+1][j+1]+a[i+1][j]+a[i][j+1];
                if (count == 0) continue;
                ans = min(ans, max(1, count-1));
                
            }
        }
        if (sum == 0) cout << 0 << endl;
        else cout << 1+sum-ans << endl;
    }
}