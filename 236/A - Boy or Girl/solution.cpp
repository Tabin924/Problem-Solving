#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<char> ss;
    int length = s.length();
    for(int i=0; i<length; i++){
        ss.insert(s[i]);
    }
    int l = ss.size();
    if(l%2==0)
    cout<<"CHAT WITH HER!
";
    else
    cout<<"IGNORE HIM!
";
    return 0;
}