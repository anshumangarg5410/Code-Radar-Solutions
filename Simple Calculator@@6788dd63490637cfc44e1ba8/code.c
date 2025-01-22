#include <stdio.h>

int main(){
    int a,b;
    char c;
    if (char == "+") printf("%d", a + b);
    else if (char == "-") printf("%d", a - b);
    else if (char == "*") printf("%d", a * b);
    else if (char == "/") {
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
    return 0;
}

