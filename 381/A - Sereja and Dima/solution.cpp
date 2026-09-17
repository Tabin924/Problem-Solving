#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int s = 0, d = 0;
    int i=0, j=n-1;
    for(int k=1; k<=n && i<=j; k++){
        if(k%2!=0){
            if(a[i]>a[j]){
                s += a[i];
                i++;
            }
            else{
                s += a[j];
                j--;
            }
        }
        else{
            if(a[i]>a[j]){
                d += a[i];
                i++;
            }
            else{
                d += a[j];
                j--;
            }
        }
    }
    cout << s << " " << d << endl;
    return 0;
}