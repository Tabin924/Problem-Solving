#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    string s;
    cin >> s;
    vector<char> v;
    for(int i=0; i<s.length(); i+=2){
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    int l = v.size();
    for(int i=0; i<l; i++){
        if(i == l-1)
        cout << v[i];
        else
        cout << v[i] << "+";
    }
    cout << endl;
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