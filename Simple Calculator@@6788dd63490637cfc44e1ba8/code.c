// #include <stdio.h>

// int main(){
//     int a, b;
//     char op;
//     scanf("%d %d %c", &a, &b, &op);

//     int result = a;
//     if (op == '+'){
//         printf("%d", a + b);
//     }
//     else if(op == '-'){
//         printf("%d", a - b);
//     }
//     else if(op == '*'){
//         printf("%d", a*b);
//     }
//     else if(op == '/'){
//         printf("%d", a/b);
//     }
//     return 0;
// }

#include <stdio.h>

int main(){
    int a, b;
    char op;

    // Space added in scanf to prevent newline issues with %c
    scanf("%d %d %c", &a, &b, &op);

    if (op == '+'){
        printf("%d\n", a + b);
    }
    else if(op == '-'){
        printf("%d\n", a - b);
    }
    else if(op == '*'){
        printf("%d\n", a * b);
    }
    else if(op == '/'){
        if (b == 0) { // Check for division by zero
            printf("Error: Division by zero is not allowed.\n");
        } else {
            printf("%d\n", a / b);
        }
    }
    else {
        printf("Error: Invalid operator.\n"); // Handle invalid operators
    }

    return 0;
}