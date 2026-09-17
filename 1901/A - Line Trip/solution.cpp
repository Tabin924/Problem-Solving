#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int &x : v){
        cin >> x;
    }
    int V = v[0];
    for(int i=1; i<n; i++){
        int temp = v[i] - v[i-1];
        V = max(V, temp);
    }
    V = max(V, 2*(x - v[n-1]));
    cout << V << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while (t--){
        bankai();
    }
    
    return 0;
}