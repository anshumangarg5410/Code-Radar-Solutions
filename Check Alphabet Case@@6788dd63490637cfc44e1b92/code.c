#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    if ((int)a >= 65 && (int)a <= 90){
        printf("Uppercase");
    }
    else if ((int)a >= 97 && (int)a <= 122) {
        printf("Lowercase");
    }
    else {
        printf("Not an Alphabet");
    }
    return 0;
}