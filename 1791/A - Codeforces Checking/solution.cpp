#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    char ch;
    cin >> ch;
    if(ch=='c' ||  ch=='o' ||  ch=='d' ||  ch=='e' ||  ch=='f' ||  ch=='o' ||  ch=='r' ||  ch=='c' ||  ch=='e' || ch=='s'){
        cout << "YES
";
    }
    else{
        cout << "NO
";
    }
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--){
        bankai();
    }
 
    return 0;
}