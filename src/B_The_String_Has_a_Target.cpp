#include <iostream>
#include <vector>
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
        char mn = 120;
        int min_ind = 0;
        int sc = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] < mn) min_ind = i;
            else if (s[i] == mn) {
               string t1 = string(1, s[min_ind]) + s.substr(0, min_ind) + s.substr(min_ind+1, n-(min_ind+1)); 
               string t2 = string(1, s[i]) + s.substr(0, i) + s.substr(i+1, n-(i+1));
               if (t1[min_ind] >= t2[min_ind]) min_ind = i;
            }
            mn = min(mn, s[i]); 
        }
        if (min_ind) s = string(1, s[min_ind]) + s.substr(0, min_ind) + s.substr(min_ind+1, n-(min_ind+1)); 
        cout << s << endl;
    }
}