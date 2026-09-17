#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long count = 0;
        if(k==1){
            cout << n << endl;
            continue;
        }
        while(n>0){
            if(n%k==0){
                n = n / k;
                count++;
            }
            else{
                long long x = n%k;
                count += x;
                n -= x;
            }
        }
        cout << count << endl;
    }
    return 0;
}