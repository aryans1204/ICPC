#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    unsigned long long a,b,n;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
 
        for(long long i=0; i<=64; i++)
        {
            if((a & (1LL << i)) == 0)
            {
                if((a | (1LL << i)) > b) break;
                a |= (1LL << i);
            }
        }
 
        cout << a << endl;
    }
    return 0;
}