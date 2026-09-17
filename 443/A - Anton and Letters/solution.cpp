#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    set<char> t;
    for(int i=0; i<s.length(); i++){
        if(s[i]>= 'a' && s[i]<= 'z'){
            t.insert(s[i]);
        }
    }
    cout << t.size() << endl;
    return 0;
}