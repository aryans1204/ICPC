#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector< pair<int, int> > a(n);
        vector< pair<int, int> > b(n);
        int k, l;
        for (int i = 0; i < n; i++) {
            cin >> k >> l;
            a[i] = make_pair(k, i);
            b[i] = make_pair(l, i);
        }
        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end(), cmp);
        int i, j;
        i = j = n-1;
        int mn = INT_MAX;
        while (i+j+2 >= n) {
            if (i < 0 || j < 0) break;
            if (a[i].second != b[j].second) mn = min(mn, abs(a[i].first-b[j].first)); 
            a[i].first > b[j].first ? i-- : j--;
        }
        cout << mn << endl;
    }
}