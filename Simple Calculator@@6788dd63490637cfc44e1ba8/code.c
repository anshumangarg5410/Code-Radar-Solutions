#include <stdio.h>

int main() {
    int a, b;
    char operator;

    // Added a space before %c to consume newline or whitespace
    scanf("%d %d %c", &a, &b, &operator);

    if (operator == '+') {
        printf("%d", a + b);
    } else if (operator == '-') {
        printf("%d", a - b);
    } else if (operator == '*') {
        printf("%d", a * b);
    } else if (operator == '/') {
        if (b != 0) { // Check for division by zero
            printf("%d", a / b);
        } else {
            printf("0");
        }
    } else {
        printf("Invalid operator.");
    }

    return 0;
}