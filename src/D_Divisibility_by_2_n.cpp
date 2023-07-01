#include <cmath>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        int temp;
        ll product = 1;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            product *= temp*(i+1);
        }
        if (product % pow(2, n)) cout << -1 << endl;
        else {
            int factors = 0;
            vector<int> v = factorize(product/pow(2, n));
            for (auto it : v) {

            } 
        }
    }
}