#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &x : v){
        cin >> x;
    }
    sort(v.begin(), v.end(), greater<int>());
    int count = 0;
    for(int i=1; i<n; i++){
        count += (v[0] - v[i]);
    }
    cout << count << endl;
    return 0;
}