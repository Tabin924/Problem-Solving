#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    vector<int> v(3);
    for(auto &x : v){
        cin >> x;
    }
    sort(v.begin(), v.end());
    if(v[0] + v[1] < v[2]){
        v[2] = v[0] + v[1];
    }
    sort(v.begin(), v.end());
    cout << v[2] - v[0] << endl;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    bankai();
 
    return 0;
}