#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        stack<char> strStack; 
        for(char c : s) {
            if(!strStack.empty()) {
                if(!strStack.empty() && strStack.top() == 'A' && c == 'B') {
                    strStack.pop(); 
                    //strStack.pop(); 
                }3
            } else {
                strStack.push(c);
            }
        }

        cout << strStack.size() << endl;
    }

    return 0;
}