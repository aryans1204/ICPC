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
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        int same = 0;
        for (int i = 0; i < n-1; i++) {
            if (v[i] + v[i+1] == -2) {
                sum += 4;
                break;
            }
            else if (v[i] + v[i+1] == 2) same++;
        }
        if (same == n-1) sum -= 4;
        cout << sum << endl;
    }
    return 0;
}