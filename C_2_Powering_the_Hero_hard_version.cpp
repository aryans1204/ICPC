#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        priority_queue<int> pq;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            if (!pq.empty() && !v[i]) {
                ans += pq.top();
                pq.pop();
            }
            else if (v[i]) {
                pq.push(v[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}