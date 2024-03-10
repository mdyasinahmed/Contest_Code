#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> V;
    map<int, int> M;
    map<int, int>::iterator it;
    
    int N;
    
    while(cin >> N) {
        it = M.find(N);
        
        if (it == M.end()) {
            V.push_back(N);
            M[N] = 1;
        } else
            ++(it->second);
    }
    
    for(int i=0; i<V.size(); ++i) {
        cout << V[i] << " " << M[V[i]] << endl;
    }
}