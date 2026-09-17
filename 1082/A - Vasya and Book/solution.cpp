#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y, d;
        cin >> n >> x >> y >> d;
        int count = 0;
        if(abs(x-y)%d==0){
            count = abs(x-y)/d;
            cout << count << endl;
        }
        else if((y-1)%d!=0 && (n-y)%d!=0){
                cout << -1 << endl;
        }
        else{
            int countF = 0, countL = 0;
            if((x-1)%d==0)
            countF += (x-1)/d;
            else
            countF += (x-1)/d + 1;
            if((y-1)%d==0)
            countF += (y-1)/d;
            else
            countF=INT_MAX;
            if((n-x)%d==0)
            countL += (n-x)/d;
            else
            countL += (n-x)/d + 1;
            if((n-y)%d==0)
            countL += (n-y)/d;
            else
            countL = INT_MAX;
            int result = min(countF, countL);
            cout << result << endl;
        }
    }
}