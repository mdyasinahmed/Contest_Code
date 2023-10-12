#include<bits/stdc++.h>
using namespace std;


int groupMax(int n, vector<int>&v) {
    sort(v.begin(), v.end());
    int grp = 0; 
    int size = 0; 

    for(int i=0; i<n; i++) {
        cout <<"i :" << i << endl;
        size++; 
        //cout <<"size :" << size << endl;
        if(size >= v[i]) { 
            grp++; 
            size = 0;
            //cout <<"Group :" << grp << endl;
            //cout <<"Size Now :" << size << endl;
        }
        //cout <<"Group :" << grp << endl;
        //cout <<"Size Now :" << size << endl;
        
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