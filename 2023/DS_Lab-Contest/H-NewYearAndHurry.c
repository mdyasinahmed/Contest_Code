#include <stdio.h>

int main()
{
    int n, k, t, t2, p, i, rt;
    scanf("%d %d", &n, &k);

    t = 240; 
    rt = t - k;
    p = 0;

    for(i=1;i<=n;i++)
    {
        t2 = 5*i;

        if(t2 <= rt)
        {
            p++;
            rt -= t2;
        } 
        else
        {
            break;
        }
    }

    printf("%d\n", p);

    return 0;
}
