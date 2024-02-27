#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, sumE=0, sumO=0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            if(arr[i]%2==0) {
                sumE+=arr[i];
            } else {
                sumO+=arr[i];
            }
        }

        if(sqrt(sumE)%2==0 && sqrt(sumE)%2==0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }

    return 0;
}