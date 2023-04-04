#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        string s;
        cin >> n;
        vector<vector<int> > v(n, vector<int>(n, 0)); 
        for (int i = 0; i < n; i++) {
            cin >> s;
            for (int j = 0; j < n; j++) {
                v[i][j] = s[j]-'0';
            }
        }
        int coli = 0;
        int colj = n-1;
        int i = 0; 
        int j = n-1;
        int ans = 0;
        while (i < j) {
            int p1 = i, p2 = j;
            int left_inv = 0;
            while (p1 <= j) {
                left_inv += v[p1++][coli];
            }
            p1 = coli;
            int up_inv = 0;
            while (p1 <= colj) {
                up_inv += v[i][p1++];
            }
            int right_inv = 0;
            while (p2 >= i) {
                right_inv += v[p1--][colj];
            }
            p2 = colj;
            int down_inv = 0;
            while (p2 >= coli) {
                down_inv += v[j][p2--];
            }
            ans += right_inv + left_inv + down_inv + up_inv;
            ans -= (v[i][i]+v[j][j]+v[i][j]+v[j][i]);
            i++;
            j--;
            coli++;
            colj--;
        }
        cout << ans << endl;
    }
}