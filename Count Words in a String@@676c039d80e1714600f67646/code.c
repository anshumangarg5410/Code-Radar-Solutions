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
#include <string.h>

int main() {
    char mystr[100]; 
    int words = 0;

    printf("Enter a sentence: ");
    fgets(mystr, 100, stdin);  // Read full line

    // Tokenize string by spaces
    char *token = strtok(mystr, " \n");  
    while (token != NULL) {
        words++;
        token = strtok(NULL, " \n");  // Get next word
    }

    printf("Total words: %d\n", words);
    return 0;
}