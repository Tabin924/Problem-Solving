#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int x, y;
        int count = 0;
        cin >> x >> y;
        if(x % y == 0)
        cout << count << endl;
        else{
            int a = x % y;
            cout << y - a << endl;
        }
    }
    return 0;
}