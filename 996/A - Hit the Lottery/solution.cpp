#include<bits/stdc++.h>
using namespace std;
 
void bankai(){
    int amount;
    cin >> amount;
    vector<int> v = {1, 5, 10, 20, 100};
    int coin = 0, i = 4;
    while(amount > 0){
        int x = amount / v[i];
        coin += x;
        amount -= x * v[i];
        i--;
    }
    cout << coin << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // int t;
    // cin >> t;
    // while (t--)
    bankai();
 
    return 0;
}