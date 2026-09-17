#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    string s1, s2;
    cin >> s1 >> s2;
    char temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    cout << s1 << " " << s2 << endl;
}
 
int main(){\
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        bankai();
    }
 
    return 0;
}