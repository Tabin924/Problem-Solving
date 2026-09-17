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
    sort(v.begin(), v.end(), greater<int>());
    int my = 0, count = 0;
    for(int i=0; i<n; i++){
        count++;
        my += v[i];
        int bro = 0;
        for(int j=i+1; j<n; j++){
            bro += v[j];
        }
        if(my > bro){
            cout << count << endl;
            return;
        }
    }
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