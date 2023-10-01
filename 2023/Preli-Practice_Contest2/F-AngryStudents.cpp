#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count = 0;
        int point = 0;

        for(int i=n-1; i>=0; i--) {
            if(s[i] == 'P') {
                point++;
            } else {
                count = max(count, point);
                point = 0;
            }
        }

        cout << count << endl;
    }

    return 0;
}