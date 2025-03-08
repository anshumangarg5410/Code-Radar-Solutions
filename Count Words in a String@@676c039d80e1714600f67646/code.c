// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// int main(){
//     char mystr[100]; int j=0; int words = 0;
//     while (1) {
//         scanf("%s", mystr);
//         j++;
//         if (mystr[0] == '\0') break;
//         words++;
//     }
//     printf("%d", words);
// }
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char mystr[100]; 
    int words = 0;

    while (1) {
        fgets(mystr, 100, stdin);  // Read one word

        if (mystr[0] == '\n') break;  // Stop if empty string

        words++;
    }

    printf("Total words: %d\n", words);
    return 0;
}