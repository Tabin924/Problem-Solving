#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    int n; 
    cin >> n;
    vector<int> v(n), a(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
        a[i] = v[i];
    }
    sort(v.begin(), v.end());
    int x;
    if(v[0] != v[1]){
        x = v[0];
    }
    else{
        x = v[n-1];
    }
    auto it = find(a.begin(), a.end(), x) - a.begin();
    cout << it + 1 << endl;
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