#include <stdio.h>
#include <ctype.h>

int main() {
    char chr;
    char keys[] = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";

    while ((chr = getchar()) != EOF) {
        if (chr != '\n') {
            if (chr == ' ')
                putchar(chr);
            else {
                int i = 0;
                char lowercaseChr = tolower(chr); // Convert to lowercase

                // Find the corresponding character in the keys array
                while (keys[i] != lowercaseChr)
                    i++;

                // Determine the case of the original character and print the decoded character accordingly
                if (isupper(chr))
                    putchar(toupper(keys[i - 1])); // Print uppercase decoded character
                else
                    putchar(keys[i - 1]); // Print lowercase decoded character
            }
        }

        if (chr == EOF)
            break;
    }

    return 0;
}
