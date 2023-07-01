#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>


using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        string s;
        vector<pair<char, int> > v;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            v.push_back(make_pair(s[i], i));
        }
        sort(v.begin(), v.end());
        string ans = "";
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] > s[i+1]) {
                int val = s[i];
                int ind = upper_bound(v.begin(), v.end(), s[i], [](pair<char, int> b, pair<char, int> c){return b.first > c.first;}) - v.begin()-1;
                s.erase(i, 1);
                s.insert(v[ind].second, to_string(min(val+1, 9)));
            }
        }
        cout << s << endl;
    }
}