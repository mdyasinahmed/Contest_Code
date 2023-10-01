#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int total_seconds = 0;

    for (int i = 0; i < n; i++) {
        string ai = a[i];
        string bi = b[i];

        int diff_pos = 0;
        while (diff_pos < ai.length() && diff_pos < bi.length() && ai[diff_pos] == bi[diff_pos]) {
            diff_pos++;
        }

        total_seconds += (ai.length() - diff_pos) + (bi.length() - diff_pos);
    }

    cout << total_seconds << endl;

    return 0;
}
