#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    string s;
    cin >> s;
    string a = " ";
    string r;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 2;
        }
        else{
            r.push_back(s[i]);
            if(s[i+1] == 'W' && s[i+2] == 'U' && s[i+3] == 'B'){
                r.push_back(a[0]);
            }
        }
    }
    cout << r << endl;
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