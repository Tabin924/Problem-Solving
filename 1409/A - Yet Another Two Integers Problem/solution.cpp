#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
 
void bankai(){
    int a, b;
    cin >> a >> b;
    int x = abs(a - b);
    if(x % 10 == 0){
        cout << x / 10 << endl;
    }
    else{
        cout << (x / 10) + 1 << endl;
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