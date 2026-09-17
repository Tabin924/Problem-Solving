#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    long long n, m, a;
    cin >> n >> m >> a;
    long long x = (n + a - 1) / a;
    long long y = (m + a - 1) / a;
    cout << x * y << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // int t;
    // cin >> t;
    // while (t--)
    bankai();
 
    return 0;
}