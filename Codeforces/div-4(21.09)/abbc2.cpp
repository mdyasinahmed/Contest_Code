#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int coins = 0, ab = 0, ba = 0;  
        int n = s.length();

        for(int i=0; i<n-1; i++) {
            if(s[i] == 'A' && s[i+1] == 'B') {
                ab++, i++;
            } 
            else if(s[i] == 'B' && s[i+1] == 'A') {
                ba++, i++;
            }
        }

        if(ab>0 && ba>0) {
            coins = min(ab,ba)+1;
        }

        cout << coins << endl;
    }

    return 0;
}
