#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
 
void bankai(){
    ll n, k;
    cin >> n >> k;
    ll x = (n+1) / 2;
    if(k <= x){
        cout << (2 * k) - 1 << endl;
    }
    else{
        cout << 2 * (k - x) << endl;
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    // cin >> t;
    while (t--){
        bankai();
    }
 
    return 0;
}