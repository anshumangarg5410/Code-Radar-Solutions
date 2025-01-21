#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char mystr;
    scanf("%c", &mystr);
    printf("You entered: %d", mystr);
    return 0;
}