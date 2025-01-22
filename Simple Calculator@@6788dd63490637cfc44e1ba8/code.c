#include <stdio.h>

int main(){
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    if (b == 0){
        printf("%d", b);
        return 0;
    }
    else {
        printf("%d", b);
    }
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