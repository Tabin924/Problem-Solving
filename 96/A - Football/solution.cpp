#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    string s;
    cin >> s;
    int count1 = 0, count2 = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '1'){
            count1++;
            count2=0;
            if(count1 >= 7){
                cout << "YES" << "
";
                return;
            }
        }
        else{
            count2++;
            count1=0;
            if(count2 >= 7){
                cout << "YES" << "
";
                return;
            } 
        }
    }
    cout << "NO" << "
";
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    bankai();
 
    return 0;
}