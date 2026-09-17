#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i%2!=0){
                cout << "#";
                continue;
            }
            if(i%2==0 && i%4!=0 && j!=m){
                cout << ".";
                continue; 
            }
            if(i%2==0 && i%4!=0){
                cout << "#";
                continue; 
            }
            if(i%4==0 && j==1){
                cout << "#";
                continue;
            }
            if(i%4==0){
                cout << ".";
            }
        }
        cout << endl;
    }
}