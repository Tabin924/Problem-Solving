#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
        v[i] = a[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int x = 0, sum = 0;
    for(int i=0; i<n; i++){
        sum += v[i] * x + 1;
        x++;
    }
    cout << sum << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i] == a[j] && a[j]!= -1){
                cout << j+1 << " ";
                a[j] = -1;
                break;
            }
        }
    }
    return 0;
}