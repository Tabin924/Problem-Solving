#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &x : v){
        cin >> x;
    }
    if(is_sorted(v.begin(), v.end()) || k > 1){
        cout << "YES" << endl;
    }
    else
    cout << "NO" << endl;
    }
    return 0;
}