#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int sum = 0;
    for(int i=0; i<n; i++){
        int x = abs(s1[i] - s2[i]);
        if(x > 5){
            x = 10 - x;
        }
        sum += x;
    }
    cout << sum << endl;
    return 0;
}