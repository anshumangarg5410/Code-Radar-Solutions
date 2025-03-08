#include<stdio.h>
#include<math.h>

int main(){
    int a;
    scanf("%d", &a);
    int variable = a; int i = 0;
    int ainbinary=1;
    while (variable > 0){
        ainbinary += ainbinary*10 + (variable%10);
        variable /= 10;
    }
    printf("%d", ainbinary);
    return 0;
}