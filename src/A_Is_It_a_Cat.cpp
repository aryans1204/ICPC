#include <string>
#include <iostream>
#include <cstring>

using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        while (i < n && (s[i] == 'M' || s[i] == 'm')) i++;
        if (i == 0 || i == n-1 || (s[i] != 'E' && s[i] != 'e')) {
            cout << "NO" << endl;
            continue;
        }
        int temp = i;
        while (i < n && (s[i] == 'E' || s[i] == 'e')) i++;
        if (i == temp || i == n-1 || (s[i] != 'O' && s[i] != 'o')) {
            cout << "NO" << endl;
            continue;
        }
        temp = i;
        while (i < n && (s[i] == 'O' || s[i] == 'o')) i++;
        if (i == temp || (s[i] != 'w' && s[i] != 'W')) {
            cout << "NO" << endl;
            continue;
        }
        while (i < n && (s[i] == 'W' || s[i] == 'w')) i++;
        if (i < n || (s[n-1] != 'W' && s[n-1] != 'w')) {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }

}