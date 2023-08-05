#include<stdio.h>

int main(){
    long long t, l, r, a, n, count=0;
    scanf("%lld", &t);

    while(t--){
        scanf("%lld %lld", &l, &r);

        if(l%2!=0 && r%2!=0){
            n = (r-l)/2;
        }
        if(l%2==0 && r%2==0){
            l--, r+=1;
            n = (r-l)/2;
        }
        if(l%2==0 && r%2!=0){
            l--;
            n = (r-l)/2;
        }
        if(l%2!=0 && r%2==0){
            r++;
            n = (r-l)/2;
        }

        if(l%2==0){
            a = l;
        }else{
            a = l+1;
        }
        //printf("%d %d %d %d\n", l, r, n, a);

        long long ans = (n/2.0*(2*a+(n-1)*2));
        printf("%lld\n", ans);
    }

}