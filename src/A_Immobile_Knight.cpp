#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n, m;
        cin >> n >> m;
        int i = 1;
        int j = 1;
        if (n == 1 || m == 1) cout << 1 << " " << 1 << endl;
        else if (n <= 3 && m <= 3) cout << 2 << " " << 2 << endl;
        else cout << 1 << " " << 1 << endl;
    }
    return 0;
}