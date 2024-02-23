#include<bits/stdc++.h>
using namespace std;


int main() {   
    int t, runs = 0, wickets = 0, balls = 0;
    cin >> t;

    //cout << overs;
    string input;
    string numStr;

    while(t--) {
        cin >> input;

        int balls = input.size();

        for(char ch: input) {
            if(ch == 'W') {
                wickets++;
            }
            if(isdigit(ch)) {
                numStr=ch;
                runs = runs + stoi(numStr);
            }
        }


        int overs = balls/6;
        int RB = balls%6;
        double OverFormat = overs + static_cast<double>(RB)/10;

        (OverFormat>1.0)?printf("%.1f Overs ",OverFormat):printf("%.1f Over ",OverFormat);
        (runs>1)?printf("%d Runs ",runs):printf("%d Run ",runs);
        (wickets>1)?printf("%.d Wickets ",wickets):printf("%d Wicket ",wickets);
        cout<<endl;
        
        runs=0, wickets = 0;
    }
    
    return 0;
}