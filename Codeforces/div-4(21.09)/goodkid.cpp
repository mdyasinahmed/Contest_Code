#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> d(n);
        for(int i=0; i<n; i++) {
            cin >> d[i];
        }

        int dm = 9;
        int indm = -1;

        for(int i=0; i<n; i++) {
            if(d[i] < dm){
                dm = d[i];
                indm = i;
            }
        }

        if(dm == 9) {
            indm = n - 1;
        }

        d[indm]++;

        long long product = 1;
        for(int i=0; i<n; i++) {
            product *= d[i];
        }

        cout << product << endl;
    }

    return 0;
}
