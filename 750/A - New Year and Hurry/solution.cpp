#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int t = 4*60, count = 0, a=k;
    if(k>t){
        cout << 0 << endl;
        return 0;
    }
    
    for(int i=1; i<=n; i++){
        if((i*5+a) <= t){
            count++;
            a = a + (i*5);
        }
        else
        break;
    }
    cout << count << endl;
}