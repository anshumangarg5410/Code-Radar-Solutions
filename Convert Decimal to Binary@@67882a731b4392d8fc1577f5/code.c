#include <stdio.h>

void printBinary(unsigned int n) {
    int binary[32]; 
    int index = 0;
    if (n == 0) {  
        printf("0");
        return;
    }
    while (n > 0) {
        binary[index++] = n % 2;  
        n /= 2;  
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    printBinary(num);
}