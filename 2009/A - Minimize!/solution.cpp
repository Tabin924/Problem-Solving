#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    int a, b;
    cin >> a >> b;
    int c = a, sum = INT_MAX;
    while(c <= b){
        int count = (c - a) + (b - c);
        sum = min(sum, count);
        c++;
    }
    cout << sum << endl;
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