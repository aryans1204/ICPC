#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
long long bs(long long a) {
    long long left = 0;
    long long right = 2000000123;
    while (right > left) {
        long long mid = (left + right) / 2;
        if (mid*mid > a) right = mid;
        else left = mid+1; 
    }
    return left-1;
}
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        long long l, r;
        cin >> l >> r;
        long long count = 0;
        long long sql = bs(l);
        long long sqr = bs(r);
        if (sql == sqr) {
            count = 0;
            for (int i = 0; i < 3; i++) {
                if (l <= sql*(sql+i) && r >= sql*(sql+i)) count++;
            }
        }
        else {
            count = (sqr-sql-1)*3;
            for (int i = 0; i < 3; i++) {
                if (l <= sql*(sql+i) && r >= sql*(sql+i)) count++;
                if (l <= sqr*(sqr+i) && r >= sqr*(sqr+i)) count++;
            }
        }
        
        cout << count << endl;
    }
}