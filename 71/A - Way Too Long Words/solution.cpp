#include<iostream>
#include<string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int length = s.length();
        if(length <= 10){
            cout << s <<endl;
        }
        else{
            cout << s[0] << length-2 << s[length-1] << endl;
        }
    }
    return 0;
}