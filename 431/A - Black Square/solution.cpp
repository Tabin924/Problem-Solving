#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
 
void bankai(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
    ll sum = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '1'){
            sum += a;
        }
        else if(s[i] == '2'){
            sum += b;
        }
        else if(s[i] == '3'){
            sum += c;
        }
        else{
            sum += d; 
        }
    }
    cout << sum << endl;
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