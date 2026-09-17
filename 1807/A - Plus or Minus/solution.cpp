#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b==c)
    cout << "+
";
    else
    cout << "-
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--)
    bankai();
 
    return 0;
}