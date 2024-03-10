#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, n;
    cin >> n;

    vector<long long> V(1000005, 0);

    long long countP = 0, countN = 0;

    for(int i=0; i<n; i++) {
        char x;
        cin >> x >> m;

        if(x=='+') {
            if(countN >= 1) countN--;
            countP++;
            V[m] = 1;
        } else {
            if(V[m] == 1) countP--;
            countN++;
            V[m] = 0;
        }
    }

    cout << (countP+countN) << endl;

    return 0;
}
