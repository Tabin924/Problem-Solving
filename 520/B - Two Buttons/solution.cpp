#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int count = 0;
    while(m>n){
        if(m % 2 == 0){
            m = m / 2;
            count++;
        }
        else{
            m = m + 1;
            count++;
        }
    }
    if(m<n){
        int x = n - m;
        count = count + x;
    }
    cout << count << endl;
    return 0;
}