#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sum = 0;
    char x = 'a';
    for(int i=0; i<s.length(); i++){
        int y = abs(x-s[i]);
        int z = min(y, 26-y);
        x = s[i];
        sum += z;
    }
    cout << sum << endl;
    return 0;
}