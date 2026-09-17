#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    int a, b;
    cin >> a >> b;
    int x = min(a, b);
    a = a - x;
    b = b - x;
    int y = (a/2) + (b/2);
    cout << x << " " << y << "
";
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