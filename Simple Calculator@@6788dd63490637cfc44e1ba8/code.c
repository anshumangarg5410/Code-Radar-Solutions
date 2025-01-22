#include <stdio.h>

int main(){
    float a, b;
    char op;
    scanf("%f %f %c", &a, &b, &op);
    int result = a;
    if (op == '+'){
        printf("%d", a + b);
    }
    else if(op == '-'){
        printf("%d", a - b);
    }
    else if(op == '*'){
        printf("%d", a*b);
    }
    else if(op == '/'){
        printf("%d", a/b);
    }
    return 0;
}