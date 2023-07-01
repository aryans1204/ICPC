#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        int total = 0;
        vector<int> a(n+1, 0);
        for (int i = 1; i <=n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i < n ; i++) {
            if (a[i] <= a[i+1]) continue;
            int d = a[i]-a[i+1];
            while (d) {
                cout << i+1 << " ";
                total++;
                d--;
            }
        }
        while (total < n) {
            cout << n << " ";
            total++;
        }
        cout << endl;
    }
}