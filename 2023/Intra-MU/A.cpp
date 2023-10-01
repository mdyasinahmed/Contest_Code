#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, l, r;
    cin>>t;
    
    while(t--){
        cin>>l>>r;
        
        int count = 0;
        for(int i=l;i<=r;++i){
            if(i%2==0){
                count +=i;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}