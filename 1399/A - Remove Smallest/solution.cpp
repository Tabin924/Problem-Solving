#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int &x : v){
        cin >> x;
    }
    sort(all(v), greater<int>());
    while(1){
        if(v.size() == 1){
            cout << "YES" << endl;
            return;
        }
        if(v[n-2] - v[n-1] == 1 || v[n-2] - v[n-1] == 0){
            v.pop_back();
            n--;
        }
        else{
            cout << "NO" << endl;
            return;
        }
    }
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