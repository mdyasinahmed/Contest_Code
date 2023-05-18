#include<stdio.h>

int main()
{
    int t, m = 5, IND = 0, ENG = 0, i, r;
    scanf("%d", &t);

    while(t--)
    {
        for(i = 1; i<=m; i++)
        {
            scanf("%d", &r);

            if(r == 1)
            {
                IND++;
            }
            if(r == 2)
            {
                ENG++;
            }
        }
        
        if(IND==ENG)
        {
            printf("DRAW\n");
        } 
        if(IND>ENG)
        {
            printf("INDIA\n");
        }
        if(IND<ENG)
        {
            printf("ENGLAND\n");
        }
        continue;
    }
    

    return 0;
}