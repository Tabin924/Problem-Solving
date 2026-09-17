#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    string s;
    cin >> s;
    int target = 1;
    if(islower(s[0])){
        for(int i=1; i<s.length(); i++){
            if(islower(s[i])){
                target = 0;
                break;
            }
        }
    }
    else{
        for(int i=1; i<s.length(); i++){
            if(islower(s[i])){
                target = 0;
                break;
            }
        }
    }
    if(target == 1){
        for(int i=0; i<s.length(); i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
            }
            else{
                s[i] = toupper(s[i]);
            }
        }
        cout << s << endl;
    }
    else{
        cout << s << endl;
    }
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