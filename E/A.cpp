#include<bits/stdc++.h>
using namespace std;


int main() {
    set <int> S;
    int t;
    cin >> t;

    while(t--){
        int q = 0, x = 0;
        cin >> q;
        cin >> x;
        if(q == 1) {
            S.insert(x);
        } else if (q==2) {
            S.erase(x);
        } else{
            set<int>::iterator it=S.find(x);
            if (it == S.end()) cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    return 0;
}