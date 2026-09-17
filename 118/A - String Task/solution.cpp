#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    string s, t;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='i' || s[i]=='u' || s[i]=='e' || s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='I' || s[i]=='U' || s[i]=='E'){
            continue;
        }
        s[i] = tolower(s[i]);
        t.push_back('.');
        t.push_back(s[i]);
    }
    cout << t << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // int t;
    // cin >> t;
    // while (t--)
    bankai();
 
    return 0;
}