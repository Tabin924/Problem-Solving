#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int count = 0;
    while(1){
        count++;
        a *= 3;
        b *= 2;
        if(a > b){
            cout << count << endl;
            return 0;
        }
    }
}