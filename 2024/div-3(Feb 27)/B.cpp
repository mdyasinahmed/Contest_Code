#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, sum=0;
        cin>>n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum+=arr[i];
        }
        
        if(sum%3 == 0) {
            cout << 0 << endl;
        } else{
            if((sum+1)%3==0) {
                cout << 1 << endl;
            } else{
                int count=0;
                for(int i=0; i<n; i++){
                    int temp=sum;
                    temp = temp-arr[i];

                    if(temp%3==0){
                        cout << 1 << endl;
                        count=1;
                        break;
                    }
                }
                if(count==0){
                    cout << 2 << endl;
                }
            }
        }
    }
    return 0;
}