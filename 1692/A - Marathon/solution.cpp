#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    int a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;
    if(a<b)
    count++;
    if(a<c)
    count++;
    if(a<d)
    count++;
    cout << count << endl;
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