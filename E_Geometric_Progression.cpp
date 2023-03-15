#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a, x, m;
    cin >> a >> x >> m;
    long long ans = 0;
    long long t = a%m;
    for (int i = 1; i < x-1; i++) {
        if (i == 1) ans += a%m;
        else {
            ans += (long long) pow(t, i)%m;
        }
    }
    cout << ans%m << endl;
}