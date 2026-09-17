#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int p, q, r, s;
    cin >> p >> q >> r >> s;
    int m = max(max(p, q), max(r, s));
    int a, b, c;
    if(m==p){
        a = m - q;
        b = m - r;
        c = m - s; 
    }
    else if(m==q){
        a = m - p;
        b = m - r;
        c = m - s;
    }
    else if(m==r){
        a = m - p;
        b = m - q;
        c = m - s;
    }
    else{
        a = m - p;
        b = m - q;
        c = m - r;
    }
    cout << a << " " << b << " " << c << " " << endl;
    return 0;
}