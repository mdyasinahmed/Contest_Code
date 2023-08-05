#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, i;
    cin>>t;

    while(t--){
        int N, Q;
        cin>>N>>Q;
        int arr[N];
        for(i=0;i<N;++i){
            cin>>arr[i];
        }
        while(Q--){
            int i, j;
            cin>>i>>j;
            for(i=0;i<N;++i){
                if(arr[i]==i || arr[i]==j){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    

    return 0;
}