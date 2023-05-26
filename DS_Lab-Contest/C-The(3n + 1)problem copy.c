#include <stdio.h>

int main()
{
    int i, j;
    scanf("%d %d", &i, &j);

    if(i > j){
        int temp = i;
        i = j;
        j = temp;
    }

    int n, l, ml = 0;

    for(n = i; n <= j; n++) {
        int num = n;
        l = 1;

        while(num != 1){
            if(num % 2 == 0){
                num /= 2;
            }
            else{
                num = 3 * num + 1;
            }
            l++;
        }

        if(l > ml){
            ml = l;
        }
    }

    printf("%d %d %d\n", i, j, ml);
    return 0;
}
