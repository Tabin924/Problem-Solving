#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    int n;
    cin >> n;
    int M=0, C=0;
    for(int i=1; i<=n; i++){
        int x, y;
        cin >> x >> y;
        if(x > y){
            M++;
        }
        else if(x < y){
            C++;
        }
    }
    if(M > C){
        cout << "Mishka" << endl;
    }
    else if(M < C){
        cout << "Chris" << endl;
    }
    else{
        cout << "Friendship is magic!^^" << endl;
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