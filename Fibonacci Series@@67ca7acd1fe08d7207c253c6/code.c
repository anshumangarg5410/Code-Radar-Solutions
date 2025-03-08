#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fibonacciSeries(int n){
    if(n == 1) return 1;
    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}