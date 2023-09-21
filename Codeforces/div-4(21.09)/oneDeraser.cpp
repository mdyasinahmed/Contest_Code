#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;  
    cin >> t;

    while(t--) {
        int n, k;  
        cin >> n >> k;
        string s;
        cin >> s;
        
        int opr = 0;
        int i = 0;
        
        while(i < n) {
            if(s[i] == 'B') {
                opr++;
                i += k; 
            } 
            else {
                i++;
            }
        }
        
        cout << opr << endl;
    }

    return 0;
}
