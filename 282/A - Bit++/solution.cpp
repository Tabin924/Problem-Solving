#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    int count = 0;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if(s == "++X" || s == "X++")
        count++;
        else if(s == "X--" || s == "--X")
        count--;
    }
    cout << count << endl;
    return 0;
}