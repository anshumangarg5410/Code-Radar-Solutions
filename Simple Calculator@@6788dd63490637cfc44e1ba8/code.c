#include <stdio.h>

int main(){
    int a,b;
    char c;
    if (c == '+') printf("%d", a + b);
    else if (c == '-') printf("%d", a - b);
    else if (c == '*') printf("%d", a * b);
    else if (c == '/') {
        if (b == 0){
            printf("error");
        }
        else if (a == 0 && b == 0){
            printf("error");
        }
        else {
            printf("%d", a / b);
        }
    }
    else printf("error");
    return 0;
}

