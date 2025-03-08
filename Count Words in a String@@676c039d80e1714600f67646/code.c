#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char mystr[100]; 
    int words = 0;

    while (1) {
        fgets(mystr, sizeof(mystr), stdin);  // Read full line including spaces

        if (mystr[0] == '\n')  // If only Enter is pressed, stop
            break;

        words++;  // Increase word count
    }

    printf("Total words: %d\n", words);
    return 0;
}