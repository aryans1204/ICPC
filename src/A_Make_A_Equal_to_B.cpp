#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        vector<int> b(n, 0);
        int anum = 0;
        int bs = 0;
        int mis = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i]) anum++;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i]) bs++;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) mis++;
        }
        if (mis > abs(anum-bs)) cout << abs(anum-bs)+1 << endl;
        else cout << abs(anum-bs) << endl;
        
    }
    return 0;
}