#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
     
    int t, k, i;
    while(n--){
        cin >> t >> k;

        deque<int> Q;

        for(i=0; i<t; ++i) {
            int r;
            cin >> r;
            Q.push_back(r);
        }

        int a=t;
        for(int i=0; i<t-k+1; ++i) {
            if(Q.empty()){
                break;
            } else {
                cout << *max_element(Q.begin(), Q.end()+k) << " ";
                Q.pop_front();
            }
        }
        cout << endl;
    }


    return 0;
}