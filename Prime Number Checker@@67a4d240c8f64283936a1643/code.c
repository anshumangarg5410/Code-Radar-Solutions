#include <stdio.h>
#include<math.h>

int isPrime(int n){
    if (n == 1 || n == 2 || n == 3) return 1;
    for(int i =3; i<=n/2; i++){
        if (n %i == 0) {
            return 0;
        }
    }
    return 1;
}

