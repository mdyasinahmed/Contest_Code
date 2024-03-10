#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;

    while(cin >> t, t) {
        int N;
        priority_queue<long long> q;
        long long cost = 0;

        while(t--) {
            cin >> N;
            q.push(-N);
        }

        while(q.size() > 1) {
            long long fst, snd;
            fst = q.top();
            q.pop();
            snd = q.top();
            q.pop();
            cost += -fst-snd;
            q.push(fst+snd);
        }

        cout << cost << endl;
    }

    return 0;
}
