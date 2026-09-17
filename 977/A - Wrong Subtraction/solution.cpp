#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    while(k--){
        int x = n % 10;
        if(x==0){
            n = n / 10;
        }
        else
        n--;
    }
    cout << n << endl;
}