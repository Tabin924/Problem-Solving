#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
 
int binary(vector<int>& v, ll t){
    ll low = 0, high = (int)v.size() - 1;
    ll ans = v.size();
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(v[mid] > t){
            ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
 
void bankai() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(auto &x : v){
        cin >> x;
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while(q--){
        ll x;
        cin >> x;
        cout << binary(v, x) << endl;
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    //cin >> t;
    while (t--) {
        bankai();
    }
 
    return 0;
}