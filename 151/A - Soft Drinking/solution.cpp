#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a = k * l / nl;
    int b = c * d;
    int x = p / np;
    int result = min(min(a, b), x);
    cout << result/n << endl;
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