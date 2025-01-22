#include <stdio.h>

int main() {
    int a, b;
    char operator;
    scanf("%d %d %c", &a, &b, &operator);
    int result = a;
    if (operator == '+'){
        printf("%d", a + b);
    }
    else if(opeartor == '-'){'
        printf("%d", a - b);
    }
    else if(opeartor == '*'){
        printf("%d", a*b);
    }
    else if(operator == '/'){
        printf("%d", a/b);
    }
    return 0;
}