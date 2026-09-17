#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    long long n, a, b, c;
    cin >> n >> a >> b >> c;
    int ab = a+b, abc = a+b+c;
    int count = 0;
    if(n >= abc){
            int x = n / abc;
            count = x * 3;
            n = n - (x * abc);
        }
    while(n > 0){
        n -= a;
        count++;
        if(n<=0){
            break;
        }
        n -= b;
        count++;
        if(n<=0){
            break;
        }
        n -= c;
        count++;
        if(n<=0){
            break;
        }
        }
        cout << count << endl;
}
    
    
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while(t--)
    bankai();
 
    return 0;
}