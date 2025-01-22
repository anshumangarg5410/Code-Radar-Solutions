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
        if (b == 0){
            printf("%d", 0);
        }
        else {
            printf("%d", a/b);
        }

    }
    return 0;
}

