#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define all(v) v.begin(), v.end()
 
void bankai(){
    int h, m;
    cin >> h >> m;
    int count = 0;
    while(1){
        if(h == 24 && m == 0){
            cout << count << endl;
            return;
        }
        if(m == 0){
            count += 60;
            h++;
            continue;
        }
        count += (60 - m);
        m = 0;
        h++;
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