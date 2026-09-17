#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++){
        s.erase(i, i);
        n -= i;
    }
    cout << s << endl;
}