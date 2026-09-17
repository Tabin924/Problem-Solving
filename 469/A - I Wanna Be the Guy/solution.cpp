#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> v(n+1);
    int p, q;
    cin >> p;
    vector<int> p1(p);
    for(int i = 0; i<p; i++){
        cin >> p1[i];
        v[p1[i]] = 1;
    }
    cin >> q;
    vector<int> q1(q);
    for(int i = 0; i<q; i++){
        cin >> q1[i];
        v[q1[i]] = 1;
    }
    for(int i=1; i<=n; i++){
        if(v[i]==0){
            cout << "Oh, my keyboard!
";
            return 0;
        }
    }
    cout << "I become the guy.
";
    return 0;
}