#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int n, index;
    string s;
    cin >> n;
    cin >> s;
    vector<int> vec(26, 0);
    for(int i=0; i<n; i++){
        if(s[i] >= 65 && s[i] <= 90){
            index = s[i]-65;
            vec[index] = 1; 
        }
        else if(s[i] >= 97 && s[i] <= 122){
            index = s[i]-97;
            vec[index] = 1; 
        }
    }
    for(int i=0; i<26; i++){
        if(vec[i] == 0){
        cout << "NO" << endl;
        return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}