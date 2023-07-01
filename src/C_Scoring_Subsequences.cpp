#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for (int i = 0;i < n; i++) {
            cin >> a[i];
        }
        int i = 0;
        for (int k = 0; k < n; k++) {
            while (a[i] < k-i+1) i++;
            cout << k-i+1 << " ";
        }
        cout << endl;
    }
}