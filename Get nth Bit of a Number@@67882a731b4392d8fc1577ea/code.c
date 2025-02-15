#include<stdio.h>
#include<math.h>

int main(){
    int a;
    scanf("%d", &a);
    int variable = a; int i = 0;
    int ainbinary;
    while (variable > 0){
        ainbinary += pow(10, i) * (variable%10);
        variable /= 10;
    }
    printf("%d", ainbinary);
}