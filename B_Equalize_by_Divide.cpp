#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector< pair<int, int> > v(n);
        int a;
        int mn = INT_MAX;
        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            v[i] = make_pair(a, i+1);
            mn = min(mn, v[i].first);
            count += v[i].first == 1;
        }
        if (mn == 1 && count < n) {
            cout << -1 << endl;
            continue;
        }
        if (count == n) {
            cout << 0 << endl;
            continue;
        }
        sort(v.begin(), v.end());
        int mn_ind = v[0].second;
        int index = 0;
        vector<pair<int, int> > ans;
        while (index != n) {
            if (v[index].first == mn) index++;
            else {
                while (v[index].first != mn) {
                    ans.push_back(make_pair(v[index].second, mn_ind));
                    int val = !(v[index].first % mn) ? v[index].first/mn : v[index].first/mn+1;
                    v[index].first = val;
                    if (val < mn) {
                        mn = val;
                        mn_ind = v[index].second;
                        index = 0;
                        break;
                    }
                }
            }
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
}