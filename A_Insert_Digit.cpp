#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n, d;
        cin >> n >> d;
        string num;
        cin >> num;
        bool f = false;
        for (int i = 0; i < n; i++) {
            if (num[i]-'0' < d) {
                char c = d+'0';
                num = num.substr(0, i) + string(1, c) + num.substr(i, n-i);
                f = true;
                break;
            }
        }
        if (f) cout << num << endl;
        else cout << num + string(1, d+'0') << endl;
    }
}