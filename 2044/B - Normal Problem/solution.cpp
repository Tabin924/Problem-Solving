#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
 
void bankai(){
    string s;
    cin >> s;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == 'q'){
            s[i] = 'p';
        }
        else if(s[i] == 'p'){
            s[i] = 'q';
        }
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
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