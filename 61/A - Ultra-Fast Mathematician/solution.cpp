#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    string ans(s1.length(), '0');
    for(int i=0; i<s1.length(); i++){
        if(s1[i] == s2[i])
        ans[i] = '0';
        else            //can also just print 0 and 1 
        ans[i] = '1';   //in this condition
    }
    cout << ans << endl;
    return 0;
}