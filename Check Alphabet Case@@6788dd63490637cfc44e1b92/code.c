#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    if ((int)a >= 65 && (int)a <= 90){
        printf("Uppercase");
    }
    else {
        printf("Lowercase");
    }
    return 0;
}