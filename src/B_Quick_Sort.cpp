#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n+1, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int maximal = 1;
        for (int i = 0; i < n; i++) {
            if (v[i] == maximal) maximal++;
        }
        cout << (n-maximal+k) / k << endl;
    }
}