#include <stdio.h>

int main() {
    int a;
    int flag = 0;
    scanf("%d", &a);
    for (int i =3; i*i<=a; i++){
        if (a %i == 0){
            flag = 0;
            break;
        }
        else if (a %i != 0){
            flag = 1;
        }
    }
    if (!flag){
        printf("Not Prime");
    }
    else {
        printf("Prime");
    }
    return 0;
}