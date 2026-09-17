#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int low = INT_MAX, high = INT_MIN, count = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        if(a[i] > high && i!=0){
            count++;
        }
        if(a[i] < low && i!=0){
            count++;
        }
        high = max(high, a[i]);
        low = min(low, a[i]);
    }
    cout << count << endl;
    return 0;
}