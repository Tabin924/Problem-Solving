#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
    int digit = n / 11;
    int count = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '8')
        count++;
    }
    int result = min(count , digit);
    cout << result << endl;
    return 0;
}