#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(k);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    for(int i=0; i<k; i++) {
        cin >> b[i];
    }

    sort(b.rbegin(), b.rend());

    int j=0;

    for(int i=0; i<n; i++) {
        if(a[i] == 0) {
            a[i] = b[j];
            j++;
        }
    }

    if(is_sorted(a.begin(), a.end())) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}
