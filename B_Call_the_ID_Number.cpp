#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> a(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> a[i];
    }
    vector<int> visited(N+1, -1);
    for (int i = 1; i <= N; i++) {
        if (visited[i] == -1) visited[a[i]] = i;
    }
    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (visited[i] == -1) count++;
    }
    cout << count << endl;
    for (int i = 1; i <= N; i++) {
        if (visited[i] == -1) cout << i << " ";
    }
    cout << endl;
}