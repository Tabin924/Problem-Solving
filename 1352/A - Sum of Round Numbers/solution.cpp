#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    int n;
    cin >> n;
    vector<int> v;
    int count = 0;
    while(n > 0){
        int x = n % 10;
        v.push_back(x);
        n = n / 10;
        if(x != 0){
            count++;
        }
    }
    cout << count << endl;
    //reverse(v.begin(), v.end());
    int t = 1;
    for(int i=0; i<v.size(); i++){
        if(v[i] == 0){
            t *= 10;
            continue;
        }
        cout << v[i]*t << " ";
        t = t * 10;
    }
    cout << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        bankai();
    }
    
    return 0;
}