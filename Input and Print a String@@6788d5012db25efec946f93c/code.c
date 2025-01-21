#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char *mystring = (char *)(malloc((1024) * sizeof(char)));
    scanf("%[^\n]", mystr);
    mystring = realloc(mystring, strlen(mystring) + 1);
    printf("%s", mystring);

    return 0;
}