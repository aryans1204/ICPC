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
        long long pairs = n;
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i-1]) pairs += i;
        }
        cout << pairs << endl;
    }
}