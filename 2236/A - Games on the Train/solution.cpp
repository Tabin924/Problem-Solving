#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = INT_MIN, mn = INT_MAX;
    for(auto &x : v){
        cin >> x;
        mx = max(mx, x);
        mn = min(mn, x);
    }
    cout << (mx - mn) + 1 << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    bankai();
 
    return 0;
}