#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
'
#define all(v) v.begin(), v.end()
 
void bankai(){
    char m[10][10];
    int sum = 0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin >> m[i][j];
            if(m[i][j] == 'X'){
                if((i+1 == 1 || j+1 == 1) || (i+1 == 10 || j+1 == 10)){
                    sum += 1;
                }
                else if((i+1 == 2 || j+1 == 2) || (i+1 == 9 || j+1 == 9)){
                    sum += 2;
                }
                else if((i+1 == 3 || j+1 == 3) || (i+1 == 8 || j+1 == 8)){
                    sum += 3;
                }
                else if((i+1 == 4 || j+1 == 4) || (i+1 == 7 || j+1 == 7)){
                    sum += 4;
                }
                else{
                    sum += 5;
                }
            }
        }
    }
    cout << sum << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    while (t--){
        bankai();
    }
    
    return 0;
}