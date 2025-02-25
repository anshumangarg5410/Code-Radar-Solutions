#include <stdio.h>
#include<math.h>

int primechecker(int n){
    for(int i =3; i<n/2; i++){
        if (n %i == 0) {
            return 0;
        }
    }
    return 1;
}

