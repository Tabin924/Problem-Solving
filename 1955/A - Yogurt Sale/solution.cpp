#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
 
void bankai(){
    int n, a, b;
    cin >> n >> a >> b;
    int amount = 0;
    if(b <= a * 2){
        int x = n / 2;
        if(n%2 == 0){
            amount = x * b;
            cout << amount << endl;
        }
        else{
            amount = x * b;
            amount += a;
            cout << amount << endl;
        }
    }
    else{
        cout << a * n << endl;
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