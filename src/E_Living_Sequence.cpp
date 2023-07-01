#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1e6+2
#define endl "\n"

ll fun(ll n){
    vector<ll>digits;
    ll bi=0;
    while(n>0){
        digits.push_back(n%9);
        n=n/9;
    }
    ll sz=digits.size();
    for(ll i=sz-1; i>=0; i--){
        bi=bi*10 + digits[i];
    }
    return bi;
}

void solve(){
    ll n;  cin>>n;
    string s=to_string(fun(n));
  
    replace( s.begin(), s.end(), '8', '9');
    replace( s.begin(), s.end(), '7', '8');
    replace( s.begin(), s.end(), '6', '7');
    replace( s.begin(), s.end(), '5', '6');
    replace( s.begin(), s.end(), '4', '5');
    cout<<s<<endl;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}