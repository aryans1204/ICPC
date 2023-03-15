#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> a(n+1, 0);
        for (int i = 1; i <=n ; i++) {
            cin >> a[i];
        }
        int mn = INT_MAX;
        int mn_ind = 1;
        for (int i = 1; i <= n; i++) {
            if (a[i] < mn) mn_ind = i;
            mn = min(mn, a[i]);
            
        }
        if (mn_ind == 1) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
}