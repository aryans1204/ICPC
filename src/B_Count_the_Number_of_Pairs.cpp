#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> nums(123, 0);
        for (int i = 0; i < n; i++) {
            nums[s[i]]++;
        }
        int burles = 0;
        for (int i = 97; i <= 122; i++) {
            int p = min(nums[i], nums[i-32]);
            burles += p;
            nums[i] -= p; nums[i-32] -= p;
            int pairs = min(k, max(nums[i], nums[i-32])/2);
            burles += pairs;
            k -= pairs;
        }
        cout << burles << endl;
    }
}