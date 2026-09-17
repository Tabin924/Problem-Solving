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
    int i = 0, count = n;
    while(1){
        if(count == 0){
            cout << count << endl;
            return;
        }
        if(s[i] == '1' && s[n-1] == '0'){
            count -= 2;
            n--;
            i++;
        }
        else if(s[i] == '0' && s[n-1] == '1'){
            count -= 2;
            n--;
            i++;
        }
        else{
            cout << count << endl;
            return;
        }
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