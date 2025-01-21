#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *mystring = (char *)malloc(1024 * (sizeof(char)));
    scanf("%[^\n]", mystring);
    mystring = realloc(mystring, strlen(mystring) + 1);
    char *token = strtok(mystring, " ");
    printf("You entered: ");
    printf("%s and", token);
    strtok(NULL, " ");
    printf(" %s", token);
    return 0;
}