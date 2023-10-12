#include<bits/stdc++.h>
using namespace std;

int primeCheck(int n) {

    int count = 0;

    if(n==0 || n==1) {
        count = 1;
    }

    for(int i=2; i<=n/2; i++) {
        if(n%i == 0) {
            count = 1;
            break;
        }
    }

    return count;
}

int main() {

    int t, a;
    cin >> t;

    while (t--)
    {
        cin >> a;

        int sumDivA = 0;
        for(int i=1; i<=a; i++) {
            if(a%i==0) {
                sumDivA += i;
            } 
        }
        //cout << sumDivA << endl;
        
        int count1 = primeCheck(sumDivA);
        if(count1 == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;

        }

    }
    
    
    return 0;
}