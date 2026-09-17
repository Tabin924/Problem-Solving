#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int mx = INT_MIN, mn = INT_MAX;
    int ix, in;
    for(int i=0; i<n; i++){
        if(v[i] > mx){
            mx = v[i];
            ix = i;
        }
        if(v[i] <= mn){
            mn = v[i];
            in = i; 
        }
    }
    int count = ix + (n - in -1);
    if(ix > in)
    cout << count - 1 << endl;
    else
    cout << count << endl;
    return 0;
}