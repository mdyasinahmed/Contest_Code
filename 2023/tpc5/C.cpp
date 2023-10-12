#include<bits/stdc++.h>
using namespace std;


int groupMax(int n, vector<int>&v) {
    sort(v.begin(), v.end());
    int grp = 0; 
    int size = 0; 

    for(int i=0; i<n; i++) {
        size++; 
        if(size >= v[i]) { 
            grp++; 
            size = 0; 
        }
    }

    return grp;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int result = groupMax(n, v);
        cout << result << endl;
    }

    return 0;
}