#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tests;
    for (cin >> tests; tests--;) {
        int n;
        cin >> n;
        int alice = 0;
        int bob = 0;
        int i = 1;
        int j = 2;
        while (alice + bob <= n) {
            if (alice + 2*i + 3 + bob > n)
            alice += 2*i+3;
            i = 2*i+3 + 1;
            bob += 2*j+1;
            j = 2*j+1 + 3;
        }
    }
}