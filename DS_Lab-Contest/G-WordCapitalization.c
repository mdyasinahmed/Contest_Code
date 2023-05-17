#include<stdio.h>
#include<string.h>
#define s 1000

int main()
{
    char c[s];
    scanf("%s", &c);

    Upper(c);
    printf("%s", c);

    return 0;
}

void Upper(char* a)
{
    if(a[0] != '\0'){
        a[0] = toupper(a[0]);
    }
}
