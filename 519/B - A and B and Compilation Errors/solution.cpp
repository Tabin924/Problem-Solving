#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a1(n);
    int sum1=0;
    for(int i=0; i<n; i++){
        cin >> a1[i];
        sum1 += a1[i];
    }
    vector<int> a2(n-1);
    int sum2=0;
    for(int i=0; i<n-1; i++){
        cin >> a2[i];
        sum2 += a2[i];
    }
    vector<int> a3(n-2);
    int sum3=0;
    for(int i=0; i<n-2; i++){
        cin >> a3[i];
        sum3 += a3[i];
    }
    cout << sum1 - sum2 << endl << sum2 - sum3 << endl;
    return 0;
}