#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    vector<int> v(3);
    for(auto &x : v){
        cin >> x;
    }
    if(v[0]==v[1] || v[1]==v[2] || v[2]==v[0]){
        cout << 0 << endl;
        return;
    }
    sort(v.begin(), v.end());
    int x = (v[2] - v[0]) / 2;
    int y = v[1] - v[0];
    int z = v[2] - v[1]; 
    cout << min(min(x,y), z) << endl;
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