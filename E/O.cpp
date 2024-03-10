#include<bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
	int n;
	cin >> n;

	while(n--) {
		int t, y;
		string s;
		cin >> t >> s;
		
        if(t == 0){
			cin >> y;
			m[s] = y;
		} else if(t == 1) {
            cout << m[s] << endl;
        } else if(t == 2) {
            m.erase(s);
        }
	}
    
	return 0;
}