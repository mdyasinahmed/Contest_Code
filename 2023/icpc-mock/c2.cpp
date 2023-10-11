#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    for (int caseNumber = 1; caseNumber <= t; caseNumber++) {
        long long n;
        cin >> n;
        long long a, b;
        cin >> a >> b;
        vector <long long>v(n);
        for(long long i = 0; i<n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long count = 0;

        for (long long i = 0; i<n; i++) {
            long long left = lower_bound(v.begin() + i + 1, v.end(), a - v[i]) - v.begin();
            long long right = upper_bound(v.begin() + i + 1, v.end(), b - v[i]) - v.begin();
            count += (right - left);
        }

        cout << "Case " << caseNumber << ": " << count << endl;
    }

    return 0;
}