#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n+1, 0);
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int x = 0;
    vector<int> c(3, 0);
    vector<int> s(n+1, 0);
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c[j];
            if (j == 0 && c[j] == 2) {
                cin >> c[j+1];
                break;
            }
            if (c[0] == 1) {
                if (!x) {
                    sum += (c[2] - a[c[1]]);
                    a[c[1]] = c[2];
                }
                else if () {
                    sum += (c[2] - x);
                }
            }
        }
    }
}