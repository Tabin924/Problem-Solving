#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    set<string> a;
    while (t--){
        string s1, s2;
        cin >> s1 >> s2;
        string s3 = s1 + " " + s2;
        a.insert(s3);
    }
    cout << a.size() << endl;
    return 0;
}