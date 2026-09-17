#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    int k, r;
    cin >> k >> r;
    int count = 1;
    while(1){
        if((k*count) % 10 == 0 || (k*count) % 10 == r){
            cout << count << endl;
            return;
        }
        else{
            count++;
        }
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