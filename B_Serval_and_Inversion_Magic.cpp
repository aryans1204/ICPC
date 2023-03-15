#include <string>
#include <cmath>
#include <iostream>

using namespace std;
bool palindrome(int i, int j, string s) {
    while (i < j) {
        if (s[i++] != s[j--]) return false;
    }
    return true;
}
int main()
{
    int tests; 
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        int j = n-1;
        bool diff = false;
        bool faulty = false;
        while (i < j) {
            if (s[i] == s[j] && !diff) {
                i++;
                j--;
                if (i >= j) {
                    cout << "Yes" << endl;
                    break;
                }
            }
            else if (s[i] == s[j] && diff) {
                if (palindrome(i+1, j-1, s)) cout << "Yes" << endl;
                else {
                    cout << "No" << endl;
                    faulty = true;
                }
                break;
            }
            else {
                diff = true;
                i++;
                j--;
            }
        }
        if (i == j) cout << "Yes" << endl;
    }
    return 0;
}