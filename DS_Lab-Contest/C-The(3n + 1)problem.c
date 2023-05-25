#include <stdio.h>

void swap(int *x, int *y)
{
    int  temp;
    temp = *x;
    *x = *y;
    *y = temp;


}

int cl(int n)
{
    int l = 1;

    while(n!=1)
    {
        if(n%2 == 0){
            n/=2;
        }
        else{
            n = 3*n+1;
        }

        l++;
    }
    
    return l;
}

int maxCL(int i, int j)
{
    if(i>j)
    {
        swap(&i, &j);
    }

    int n, l, ml = 0;

    for(n=i; n<=j; n++)
    {
        l = cl(n);
        if(l>ml){
            ml = l;
        }
    }

    return ml;
}

int main()
{
    int i, j;
    scanf("%d %d", &i, &j);

    int maxLen = maxCL(i,j);
    
    printf("%d %d %d\n", i, j, maxLen);
}