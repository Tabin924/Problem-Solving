#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    string s;
    cin >> s;
    string t = "hello";
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == t[count]){
            count++;
            if(count==5)
            break;
        }
    }
    if(count==5)
    cout << "YES" << "
";
    else
    cout << "NO" << "
";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    bankai();
 
    return 0;
}