#include <bits/stdc++.h>

using namespace std;
int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b%a, a);
}
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == 0) return false;
    if (b.second == 0) return true;
    return a.second < b.second;
}
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
        bool no = false;
        sort(v.begin(), v.end());
        vector<pair<int, int>> p(n);
        for (int i = 1; i < n; i++) {
            p[i] = make_pair(i-1, v[i]-v[i-1]);
        }
        sort(p.begin(), p.end(), cmp);
        int cur = gcd(v[p[0].first], v[p[0].first]+p[0].second);
        for (int i = 1; i < n; i++) {
            cur = gcd(cur, gcd(v[p[i].first], v[p[i].first]+p[i].second));
            if (cur > i+1) {
                no = true;
                break;
            }
        }
        if (no) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}