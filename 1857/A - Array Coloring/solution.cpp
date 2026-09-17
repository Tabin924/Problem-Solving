#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
 
void bankai(){
    int n;
    cin >> n;
    int count = 0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(x % 2 != 0){
            count++;
        }
    }
    cout << ((count % 2 == 0) ? "YES" : "NO") << endl; 
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