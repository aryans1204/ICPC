#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        vector<int> a(n, 0);
        int fire_num = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            fire_num += 1-a[i];
        }
        vector<int> b(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<int> fire;
        vector<int> frost;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) fire.push_back(b[i]);
            else frost.push_back(b[i]);
        }
        sort(fire.begin(), fire.end());
        reverse(fire.begin(), fire.end());
        sort(frost.begin(), frost.end());
        reverse(frost.begin(), frost.end());
        int i = fire.size()-1;
        int j = frost.size()-1;
        ll ans = 0;
        if (fire.size() > frost.size()) {
            while (i >= frost.size()){
                ans += fire[i--];
            }
            int temp = i;
            i = 0;
            while (i <= temp) {
                ans += 2*(fire[i]+frost[i]);
                i++;
            } 
        }
        else if (frost.size() > fire.size()) {
           while (j >= fire.size()){
                ans += frost[j--];
            } 
            int temp = j;
            j = 0;
            while (j <= temp) {
                ans += 2*(fire[j]+frost[j]);
                j++;
            }
        }
        else {
            i = 0; 
            j = 0;
            ans = 0;
            while (i < fire.size()) {
                if (i == 0) {
                    ans += min(fire[i], frost[i]);
                    ans += 2*max(fire[i], frost[i]);
                }
                else ans += 2*(fire[i] + frost[i]);
                i++;
            }
        } 
       
        cout << ans << endl;
    }
}