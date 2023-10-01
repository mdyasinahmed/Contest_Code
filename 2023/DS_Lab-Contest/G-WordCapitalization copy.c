#include<stdio.h>
#include<string.h>
#define s 1000

int main()
{
    char c[s];
    scanf("%s", &c);

    if(c[0] != '\0'){
        c[0] = toupper(c[0]);
    }

    printf("%s", c);

    return 0;
}
 