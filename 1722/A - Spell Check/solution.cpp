#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string c =  "Timur";
    sort(c.begin(), c.end());
    sort(s.begin(), s.end());
    if(s == c){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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