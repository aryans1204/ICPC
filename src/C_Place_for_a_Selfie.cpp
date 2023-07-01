#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
float findSqrt(int x)
{
    // base case
    if (x < 2) {
        return x;
    }
 
    // to store floor of `sqrt(x)`
    float result;
 
    // the square root of `x` cannot be more than `x/2` for `x > 1`
    int start = 1;
    int end = x/2;
 
    while (start <= end)
    {
        // find the middle element
        float mid = (float) (start + end) / 2;
        long sqr = mid*mid;
 
        // return `mid` if `x` is a perfect square
        if (sqr == x) {
            return mid;
        }
 
        // if `mid×mid` is less than `x`
        else if (sqr < x)
        {
            // discard left search space
            start = mid + 1;
 
            // update result since we need a floor
            result = mid;
        }
 
        // if `mid×mid` is more than `x`
        else {
            // discard the right search space
            end = mid - 1;
        }
    }
 
    // return result
    return result;
}

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n, m;
        cin >> n >> m;
        vector<int> k(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> k[i];
        }
        sort(k.begin(), k.end());
        int a, b, c;
        for (int i = 0; i < m; i++) {
            cin >> a >> b >> c;
            if (!a) {
                if (c) {
                    cout << "YES" << endl;
                    cout << k[0] << endl;
                    continue;
                }
                else {
                    cout << "NO" << endl;
                    continue;
                }
            }
            if (!c) {
                cout << "NO" << endl;
                continue;

            }
            float sq = sqrt(a*c); 
            int ind1 = upper_bound(k.begin(), k.end(), b-2*sq) - k.begin();
            if (ind1 < n && k[ind1] != b-2*sq && k[ind1] < b+2*sq) {
                cout << "YES" << endl;
                cout << k[ind1] << endl;
                continue;
            }
            int ind2 = lower_bound(k.begin(), k.end(), b+2*sq) - k.begin();
            if (ind2 < n && k[ind2] != b+2*sq && k[ind2] > b-2*sq) {
                cout << "YES" << endl;
                cout << k[ind2] << endl;
                continue; 
            }
            cout << "NO" << endl;
        }
    }
}
