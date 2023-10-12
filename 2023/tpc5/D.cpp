#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        stack<char> strStack; 
        for(int i=0; i< strStack.size();) {
            if(!strStack.empty() && strStack.top() == 'A' && c == 'B') {
                strStack.pop(); 
            } else {
                strStack.push(c);
            }
        }

        cout << strStack.size() << endl;
    }

    return 0;
}