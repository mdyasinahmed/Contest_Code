#include<bits/stdc++.h>
using namespace std;

int main() {
	int n; 
    cin >> n;

	map<string, int> M;
	while(n--) {
		int t; 
		string Str;
		cin >> t >> Str;
		
        if(t==0) {
			int x; cin >> x;
			M[Str] = x;
		} else if(t==1){
			cout << M[Str] << endl;
		} else if(t==2){
			M.erase(Str);	
		} else {
			string l = Str, r; 
            cin >> r;

			map<string, int>::iterator first = M.lower_bound(l);
			map<string ,int>::iterator end = M.upper_bound(r);
			
            while(first != end) {
				if(first->second != 0) cout << first->first << " " << first->second << endl;
                first++;
			}
		}
	}

	return 0;
}