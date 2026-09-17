#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '1'){
            s.erase(i, 1);
            break;
        }
    }
    for(int i=0; i<s.length(); i++){
        if(s[i] == '0'){
            s.erase(i, 1);
            break;
        }
    }
    cout << s << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--)
    bankai();
 
    return 0;
}