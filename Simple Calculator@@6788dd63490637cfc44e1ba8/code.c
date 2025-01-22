#include <stdio.h>

int main(){
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
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
        int result = a/b;
        if (b == 0){
            printf('0');
        }
        else (
            printf("%d", a/b);
        )
    }
    return 0;
}