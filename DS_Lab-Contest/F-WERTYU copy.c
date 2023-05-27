#include <stdio.h>

int main() {
    char c;
    char mapping[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    
    // Read input character by character
    while ((c = getchar()) != EOF) {
        if (c != '\n') {
            if (c == ' ')
                putchar(c);  // Print space character as it is
            else {
                // Find the index of the character in the mapping
                int i = 1;
                while (mapping[i] && mapping[i] != c)
                    i++;
                putchar(mapping[i-1]);  // Print the decoded character
            }
        }
        
        // Check for end of file
        if (c == EOF)
            break;
    }
    
    return 0;
}
