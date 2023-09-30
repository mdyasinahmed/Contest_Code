#include<bits/stdc++.h>
using namespace std;


int main() {
	int t, point = 0;
	char ch;
	cin >> t;

	for(int i=0; i<t; i++) {
		cin >>  ch;
	}

	for(int i=0; i<t; i++) {
		if(i == (i+1)) {
			point++;
		}
		//cout <<  ch << endl;
	}

	cout << point;

	return 0;
}