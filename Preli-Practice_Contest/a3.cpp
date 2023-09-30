#include<iostream>
using namespace std;


int main() {
	int n, count=0;
	cin >> n;

	char previousInput, currentInput;
	cin>>previousInput;

	for(int i=1; i<n; i++){
		
		cin >> currentInput;

		if(previousInput==currentInput){
			count++;
		}

		previousInput=currentInput;

	}

	cout<<count;

	return 0;
}