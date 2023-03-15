#include <iostream>
#include <vector>
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
        vector<int> suf(n, 0);
        suf[n-1] = v[n-1] == 0;
        for (int i = n-2; i >=0; i--) {
            if (v[i+1] && !v[i]) suf[i] = 1;
            else suf[i] = suf[i+1] + (v[i] == 0);
        }
        int prev = 0;
        int prev_index = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            if (suf[i] == 0) break;
            if (v[i]) {
                if (prev < suf[i]) {
                    sum += v[i];
                    if (v[i] < v[prev_index]) prev_index = i;
                }
                else {
                    if (v[prev_index] < v[i]) {
                        sum = sum - v[prev_index] + v[i];
                        int old = prev_index;
                        int mn = INT_MAX;
                        for (int j = i-prev; j <= i; j++) {
                            if (v[j] < mn && j != old) {
                                prev_index = j;
                                mn = v[j];
                            }
                        }
                    }
                    else prev_index = v[i];
                }
                prev++;
            }
            else {
                prev_index += (i-prev_index) + suf[i];
                i += suf[i]-1;
                prev = 0;
            }

        }
        cout << sum << endl;
    }
}