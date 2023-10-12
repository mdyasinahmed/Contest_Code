#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, a, b, sumDivA=0, sumDivB=0;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        for(int i=1; i<=a; i++) {
            if(a%i==0) {
                sumDivA += i;
            } 
        }
        //cout << sumDivA << endl;
        // if(sumDivA%sumDivA==0 && sumDivA%1==0) cout << "Yes" <<endl;
        // else cout << "No" << endl;
        int count1 = 0;

        if(sumDivA==0 || sumDivA==1) {
            count1 = 1;
        }

        for(int i=2; i<=sumDivA/2; i++) {
            if(sumDivA%i == 0) {
                count1 = 1;
                break;
            }
        }

        if(count1 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;

        }

        for(int i=1; i<=b; i++) {
            if(b%i==0) {
                sumDivB += i;
            }
        }
        //cout << sumDivB << endl;
        int count2 = 0;

        if(sumDivB==0 || sumDivB==1) {
            count2 = 1;
        }

        for(int i=2; i<=sumDivB/2; i++) {
            if(sumDivB%i == 0) {
                count2 = 1;
                break;
            }
        }

        if(count2 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;

        }

    }
    


    return 0;
}