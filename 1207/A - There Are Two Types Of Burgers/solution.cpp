#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int bun, patti, cutlet;
        cin >> bun >> patti >> cutlet;
        int h, c;
        cin >> h >> c;
        int profit = 0;
        int nbun = bun/2;
        if(h>=c){
            int x = min(nbun, patti);
            profit = profit + x * h;
            nbun = nbun - x;
            int y = min(nbun, cutlet);
            profit = profit + y * c;     
        }
        else{
            int x = min(nbun, cutlet);
            profit = profit + x * c;
            nbun = nbun - x;
            int y = min(nbun, patti);
            profit = profit + y * h;     
        }
        cout << profit << endl;
    }
}