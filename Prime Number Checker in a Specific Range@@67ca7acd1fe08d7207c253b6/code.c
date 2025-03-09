#include<stdio.h>
#include<stdlib.h>

int isprime(int n){
    if (n == 0 || n == 1) return 0;
    if (n == 2) return 1;
    for(int i = 2; i*i<n; i++){
        if (n%i == 0) return 0;
    }
    return 1;
}

int prirntPrimesInRange(int a, int b){
    for (int i = a; i<=b; i++){
        if (isprime(i)) printf("%d ", i);
    }
}