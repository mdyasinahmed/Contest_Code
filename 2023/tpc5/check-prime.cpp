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

    int n;
    cin >> n;

    int result = primeCheck(n);

    if(result == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;

    }
    

}