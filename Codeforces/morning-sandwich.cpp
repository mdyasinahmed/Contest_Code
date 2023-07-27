#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t, b, c, h;
    cin >> t;
    
    while(t--){
        
        cin>> b >> c >> h;

        int ml = 0;
        if(b==0 || (c==0 && h==0)) {
            ml = 0;
        } 
        else if(c == 0 || h == 0) {
            ml = min(b+1, b+2);
        }
        else{
            ml = b+2+2*min(c, h);
        }
        cout<<ml<<endl;
    }


    return 0;
}
