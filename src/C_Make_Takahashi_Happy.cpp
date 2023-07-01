#include <istream>
#include <vector>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector< vector<int> > a(h+1, vector<int>(w+1, 0));
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cin >> a[i][j];
        }
    }
    
}