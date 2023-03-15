#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    vector<int> y(m, 0);
    for (int i = 0; i < m; i++) {
        cin >> y[i];
    }
    int i = 0; 
    int j = 0;
    int k = 0;
    int sum_x = x[0];
    int sum_y = y[0];
    while (i < n && j < m) {
        if (sum_x == sum_y) {
            k++;
            i++;
            j++;
            if (i >= n || j >= m) break;
            sum_x = x[i];
            sum_y = y[j];
        }
        else if (sum_x > sum_y) {
            if (j == m-1) break;
            sum_y += y[++j];
        }
        else {
            if (i == n-1) break;
            sum_x += x[++i];
        }
    }
    cout << k << endl;
    return 0;
}