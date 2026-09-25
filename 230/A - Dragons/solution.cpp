#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
 
void bankai(){
    int s , n;
    cin >> s >> n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i< n; i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(all(v));
    for(int i=0; i<n; i++){
        if(s <= v[i].first){
            cout << "NO" << endl;
            return;
        }
        s += v[i].second;
    }
    cout << "YES" << endl;
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