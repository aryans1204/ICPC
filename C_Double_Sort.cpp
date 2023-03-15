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
        vector<int> a(n);
        vector<int> b(n);
        vector<int> a_temp(n), b_temp(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a_temp[i] = a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            b_temp[i] = b[i];
        }
        if (is_sorted(a.begin(), a.end()) && is_sorted(b.begin(), b.end())) {
            cout << "0" << endl;
            continue;
        }
        vector<pair<int, int> > c(n);
        for (int i = 0; i < n; i++) {
            c.push_back(make_pair(a[i], b[i]));
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        sort(c.begin(), c.end());
        vector<pair<int, int> > c_temp(n);

        for (int i = 0; i < n; i++) {
            c_temp.push_back(make_pair(a[i], b[i]));
        }
        sort(c_temp.begin(), c_temp.end());
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if ((c[i].first != c_temp[i].first) || (c[i].second != c_temp[i].second)) {
                flag = false;
                break;
            }   
        }
        if (flag) {
            vector<pair<int, int> > ans;
            if (!is_sorted(a_temp.begin(), a_temp.end())) {
                for (int i = 0; i < n-1; i++) {
                    for (int j = 0; j < n-i-1; j++) {
                        if (a_temp[j] > a_temp[j+1]) {
                            swap(a_temp[j], a_temp[j+1]);
                            swap(b_temp[j], b_temp[j+1]);
                            ans.push_back(make_pair(j+1, j+2));
                        }
                    }
                }
            }
            if (!is_sorted(b_temp.begin(), b_temp.end())) {
                for (int i = 0; i < n-1; i++) {
                    for (int j = 0; j < n-i-1; j++) {
                        if (b_temp[j] > b_temp[j+1]) {
                            swap(b_temp[j], b_temp[j+1]);
                            swap(a_temp[j], a_temp[j+1]);
                            ans.push_back(make_pair(j+1, j+2));
                        }
                    }
                }
            }
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++) {
                cout << ans[i].first << " " << ans[i].second << endl;
            }
        }
        else {
            cout << -1 << endl;
        }
    }
}