#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first - a.second < b.first - b.second;
}

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<pair<int, int>> v(n);
        vector<int> x(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        vector<int> y(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }
        for (int i = 0; i < n; i++) {
            v[i] = make_pair(x[i], y[i]);
        }
        sort(v.begin(), v.end(), cmp);
        int i = 0;
        int j = n-1;
        int count = 0;
        while (i < j) {
            if (v[i].first - v[i].second + v[j].first - v[j].second <= 0) {
                count++;
                i++;
                j--;
            }
            else j--;
        }
        cout << count << endl;
    }
    return 0;
}
