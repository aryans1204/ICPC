#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n+1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    vector< vector<long long> > ans(n+1, vector<long long>(n+1, 0));
    for (int i = 1; i <= n; i++) {
        vector<int> s(100000, 0);
        for (int j = i; j <= n; j++) {
            s[a[j]]++;
            if (j-i < 2) ans[i][j] = 0;
            if (s[a[j]] == 3) ans[i][j] = ans[i][j-1] + 1;
            long long temp = ((s[a[j]]-1)*(s[a[j]]-2))/2; 
            if (s[a[j]] > 3) ans[i][j] = ans[i][j-1] + temp;
            
            if (s[a[j]] < 3 && j-i >= 2) ans[i][j] = ans[i][j-1];
        }
    }
    int l, r;
    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        cout << ans[l][r] << endl;
    }

}