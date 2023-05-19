#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int r[5];

        for(int i = 0; i < 5; i++)
        {
            scanf("%d", &r[i]);
        }

        int IND = 0;
        int ENG = 0;

        for(int i = 0; i < 5; i++) 
        {
            if(r[i] == 1)
            {
                IND++;
            }
            else if(r[i] == 2)
            {
                ENG++;
            }
        }

        if(IND > ENG) 
        {
            printf("INDIA\n");
        }
        else if(ENG > IND)
        {
            printf("ENGLAND\n");
        }
        else{
            printf("DRAW\n");
        }
    }

    return 0;
}
