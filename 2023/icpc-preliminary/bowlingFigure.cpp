#include<bits/stdc++.h>
using namespace std;


int main() {   

    int t, runs = 0, wickets = 0;
    float overs = 0;
    cin >> t;

    //cout << overs;
    string input;
    string numStr;

    while(t--) {
        cin >> input;

        for(char ch: input) {
            overs++;
            if(ch == 'W') {
                wickets++;
            }
            if(isdigit(ch)) {
                numStr+=ch;
            }
        }

        for(char ch2 : numStr) {
            if(isdigit(ch2)) {
                runs = runs + stoi(numStr);
            }
        }

        printf("%.1f\n", overs);
        cout << wickets << endl;
        cout << runs << endl;
        //cout << numStr << endl;
        
    }
    return 0;
}