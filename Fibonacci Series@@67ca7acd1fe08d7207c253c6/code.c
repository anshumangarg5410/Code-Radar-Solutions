#include<stdio.h>

void fibonacciSeries(int n){
    int a =0; int b= 1;
    for(int i =0; i<n; i++){
        if (i == 0) printf("%d ", 0);
        if (i == n-1) continue;
        printf("%d ", b);
        int temp = b;
        b = a + b;
        a = temp;
    }
}