#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
pair<int, int> solve(int n);
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        pair<int, int> ans = solve(n);
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}
pair<int, int> solve(int n)
{
    if (n == 9) return make_pair(4, 5);
    if (!(n % 2)) return make_pair(n/2, n/2);
    if (n % 10 != 9) return make_pair(n/2, n/2+1);
    pair<int, int> ans = solve(n/10); 
    ans.first = ans.first*10 + 4;
    ans.second = ans.second*10 + 5;
    return ans;
}