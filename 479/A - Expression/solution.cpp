#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    int a, b, c;
    cin >> a >> b >> c;
    int mx = max({
        a + b + c,
        a * b * c,
        (a + b) * c,
        (a * b) + c,
        a * (b + c),
        a + (b * c)});
 
    cout << mx << endl;
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