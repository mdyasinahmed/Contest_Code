#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for(int i=0; i<n && k>0; i++) {

        if(i==0 && s[i]!='1') {
            s[i] = '1';
            k--;
        } 
        else if(i>0 && s[i]!='0') {
            s[i] = '0';
            k--;
        }
    }

    cout << s << endl;
    
    return 0;
}
