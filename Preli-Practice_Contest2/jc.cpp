#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> ts1, ts2;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ts1[s]++;
    }

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ts2[s]++;
    }

    int total = 0;

    for (const auto& pair : ts1) {
        const string& key = pair.first;
        int count1 = pair.second;
        int count2 = ts2[key];
        total += max(0, count1 - count2);
    }

    cout << total << endl;

    return 0;
}
