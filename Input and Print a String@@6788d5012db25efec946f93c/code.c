#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *mystring = (char *)malloc((1024) * sizeof(char));
    scanf("%[^\n]", mystring);
    mystring = realloc(mystring, strlen(mystring) + 1);
    printf("You entered: %s", mystring);
    return 0;
}
