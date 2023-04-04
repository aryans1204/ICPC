#include <iostream>
#include <vector>

using namespace std;
int main(){
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> b(n-1, 0);
        vector<int> a(n, 0);
        for (int i = 0; i < n-1; i++) {
            cin >> b[i];
        }
        a[0] = b[0];
        a[1] = 0;
        for (int i = 1; i < n-2; i++) {
            if (b[i] > b[i+1]) {
                //swap a[i] with a[i+1]=b[i]
                a[i+1] = b[i];
                int temp = b[i+1];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
            else {
                a[i+1] = b[i];
            }
        }
        a[n-1] = b[n-2];
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}