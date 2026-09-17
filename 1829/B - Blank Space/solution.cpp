#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    int n;
    cin >> n;
    vector<int> v(n);
    int mx = 0 , curr = 0;
    for(auto &x : v){
        cin >> x;
        if(x == 0){
            curr++;
        }
        else{
            curr = 0;
        }
        mx = max(mx, curr);
    }
    cout << mx << endl;
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