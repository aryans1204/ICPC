#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;
ll solve(int index, vector<int> a) {
    if (index > a.size()) return 0;
    if (index == a.size()) return a[index] >= 1 ? 1 : 0;
    int fault = -1;
    for (int i = index; i <= a.size(); i++) {
        if (a[i] < i-index+1) {
            fault = i;
            break;
        }
    }
    if (fault == -1) {
        int ans = (a.size()-index+2)*(a.size()-index+1)/2;
        return ans;
    }
    else {
        int ans = (fault)*(fault-1)/2 + solve(fault, a);
        return ans;
    }
}
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> a(n+1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        cout << solve(1, a) << endl;
    }
    return 0;
}