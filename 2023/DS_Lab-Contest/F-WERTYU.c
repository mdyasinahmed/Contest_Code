#include <stdio.h>

int main()
{
    char chr;
    char keys[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    while((chr=getchar()) != EOF)
    {
        if(chr != '\n')
        {
            if(chr == ' ')
                putchar(chr);
            else{
                int i;

                i = 1;
                while(keys[i] && keys[i] != chr)
                    i++;
                    putchar(keys[i-1]);
            }
        }

        if(chr == EOF)
            break;
    }

    
    return 0;
}
