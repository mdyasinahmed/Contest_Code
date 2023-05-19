#include <stdio.h>

int main()
{
    int t, i;
    scanf("%d", &t);

    for(i=1; i<= t; i++)
    {
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);

        int pl = (k+p) % n;

        if(pl == 0)
        {
            pl = n;
        }

        printf("Case %d: %d\n", i, pl);
    }

    return 0;
}
