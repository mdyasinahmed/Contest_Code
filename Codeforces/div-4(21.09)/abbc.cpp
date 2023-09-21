#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;  // Number of test cases
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int coins = 0;
        int n = s.length();
        int i = 0;

        while (i < n - 1) {
            // Look for the first "AB" or "BA" pair
            if ((s[i] == 'A' && s[i + 1] == 'B') || (s[i] == 'B' && s[i + 1] == 'A')) {
                coins++;
                i += 2;  // Skip over this pair
            } else {
                i++;  // Move to the next character
            }
        }

        cout << coins << endl;
    }

    return 0;
}
