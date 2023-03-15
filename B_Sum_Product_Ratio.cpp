#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    long long maxval = (v[v.size()-1] + v[v.size()-2] + v[v.size()-3]) / (v[v.size()-1]*v[v.size()-2]*v[v.size()-3]);   
}