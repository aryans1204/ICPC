#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size() % 2 ? s.size()/2 : s.size()/2+1;
    for (int i = 1; i < n; i++) {
        char temp = s[2*i-2];
        s[2*i-2] = s[2*i-1];
        s[2*i-1] = temp;
    }
    cout << s << endl;
}