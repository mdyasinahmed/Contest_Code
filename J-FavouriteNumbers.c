#include<stdio.h>

int main()
{
    int t, a;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &a);

        if(a%2==0 && a%7==0)
        {
            printf("Alice\n");
        }
        else if(a%2!=0 && a%9==0)
        {
            printf("Bob\n");
        }
        else{
            printf("Charlie\n");
        }
    }

    return 0;
}
