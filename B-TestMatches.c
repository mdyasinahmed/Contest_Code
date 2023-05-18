#include<stdio.h>

int main()
{
    int t, m = 5, IND = 0, ENG = 0, i, r;
    scanf("%d", &t);

    while(t--)
    {
        for(i = 0; i<m; i++)
        {
            scanf("%d", &r);

            if(r == 1)
            {
                IND++;
            }
            else if(r == 2)
            {
                ENG++;
            }
        }
    }
    while(t--)
    {
       
    }
    
    return 0;
} 