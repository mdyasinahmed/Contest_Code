#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string,int>m;
    int n;
    cin >> n;

    while(n--){
        int t, y;
        string str;
        
        cin >> t;
        if(t==0){
            cin >> str >> y;
            m[str] = y;
        }
        if(t==1){
            cin >> str;
            cout << m[str] << endl;
        }
    }

    return 0;
}