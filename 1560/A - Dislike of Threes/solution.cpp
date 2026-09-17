#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    int k;
    cin >> k;
    int val = 0;
    for(int i=1; i<=k; i++){
        val++;
        if((val % 3) == 0 || (val % 10) == 3){
            while(1){
                val++;
                if((val % 3) != 0 && (val % 10) != 3){
                    break;
                }
            }
        }
    }
    cout << val << endl;
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