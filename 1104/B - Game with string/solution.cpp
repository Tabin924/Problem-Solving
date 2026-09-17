#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int l = s.length();
    int flag = 1, count = 0;
    while(flag){
        flag = 0;
        for(int i=0; i<l-1; i++){ 
            if(s[i]==s[i+1]){
                s.erase(i, 2);
                l = l - 2;
                count++;
                flag = 1;
                break;
            }
        }
    }
    if(count%2==0){
        cout << "No
";
    }
    else{
        cout << "Yes
";
    }
    return 0;
}