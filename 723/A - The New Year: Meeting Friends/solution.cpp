#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int ar[3];
    cin >> ar[0] >> ar[1] >> ar[2];
    sort(ar, ar + 3);
    int x = (ar[1] - ar[0]) + (ar[2] - ar[1]);
    cout << x << endl;
    return 0;
}