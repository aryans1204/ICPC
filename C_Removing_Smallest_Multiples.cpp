#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> a(n+1, 0);
        string s;
        cin >> s;
        for (int i = 1; i <=n; i++) {
            a[i] = s[i-1] % 48;
        }
        vector<int> removed(n+1, 0);
        long long cost = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i]) continue;
            for (int j = i; j <= n; j += i) {
                if (a[j]) break;
                if (!removed[j]) cost += i;
                removed[j] = 1;
            }
        }
        cout << cost << endl;
    }
}