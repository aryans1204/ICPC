#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        vector<int> ans(n+1, 0);
        ans[0] = 0;
        ans[1] = 1;
        for (int i = 2; i <= n; i++) {
            ans[i] = ans[i-1]+1-(i%2);
        }
        ans[n] = n;
        int free = 0;
        int count = 0;
        int a = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] == 1) {
                if (free > 0) free--;
                else {
                    a++;
                }
                count++;        
            }
            else {
                free = a - ans[count];
            }
        }
        cout << a << endl;
    }
}