#include <iostream>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1) {
        cout << 1 << endl;
        cout << 1 << endl;
        return 0;
    }
    if (n == 2) {
        cout << 1 << endl;
        cout << 1 << " " << 1 << endl;
        return 0;
    }
    int count = 2;
    vector<int> color(n+2, 1);
    vector<bool> prime(n+2, true);
    for (int i = 2; i <= n+1; i++) {
        if (prime[i]) {
            for (ll j = (ll) i*i; j <= n+1; j+=i) {
                prime[j] = false;
                color[j] = 2; 
            }
        }
    }
    
    cout << count << endl;
    for (int k = 2; k <= n+1; k++) {
        cout << color[k] << " ";
    }
    cout << endl;
    return 0;
}