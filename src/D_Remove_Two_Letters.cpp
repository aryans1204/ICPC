#include <iostream>
#include <string>

using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1;
        for (int i = 0; i < n-2; i++) {
            if (s[i] != s[i+2]) ans++;
        }
        cout << ans << endl;
    }
}