#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        vector<int> c(n + 10, 0);

        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            c[x]++;
        }

        long long int result = 0, point = 0;

        for(int i=1; i<=n; i++) {
            c[i] += point;
            result += c[i]/i;
            point = c[i]%i;
        }

        cout << result << endl;
    }

    return 0;
}
