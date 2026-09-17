#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    string s;
    cin >> s;
    string t;
    for(int i=0; i<s.length(); ){
        if(s[i] == '.'){
            t.push_back('0');
            i++;
        }
        else if(s[i] == '-' && s[i+1] == '.'){
            t.push_back('1');
            i += 2;
        }
        else if(s[i] == '-' && s[i+1] == '-'){
            t.push_back('2');
            i += 2;
        }
    }
    cout << t << endl;
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