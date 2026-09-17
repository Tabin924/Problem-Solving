#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    int n;
    cin >> n;
    int police = 0, crime = 0;
    while(n--){
        int x;
        cin >> x;
        if(x>0){
            police += x;
        }
        if(x == -1){
            if(police>0){
                police--;
            }
            else{
                crime++;
            }
        }
    }
    cout << crime << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    bankai();
 
    return 0;
}