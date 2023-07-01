#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> b(n);
        int max_num = 0;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] > 0) max_num++;
        }
        vector<int> maxes(n);
        vector<int> mines(n);
        int i = 0;
        while (i < max_num) {
            maxes[i] = i+1;
            i++; 
        }
        int count = 0;
        int temp = i-1;
        while (count < n-max_num) {
            maxes[i] = max(temp, 0);
            i++;
            count++;
            temp--;
        }
        mines[0] = 1;
        int j = 1;
        count = 0;
        while (count < n-max_num) {
            mines[j] = mines[j-1] ^ 1;
            mines[j+1] = mines[j] ^ 1;
            j += 2;
            count++;
        }
        int inc = 2;
        while (j < n) {
            mines[j++] = inc++; 
        }
        for (int k = 0; k < n; k++) {
            cout << maxes[k] << " "; 
        }
        cout << endl;
        for (int k = 0; k < n; k++) {
            cout << mines[k] << " ";
        }
        cout << endl;

    }
}