#include<stdio.h>
#include<stdlib.h>

int palindrome(int num){
    if (0 < num && num < 10) return 1;
    if (num < 0) return 0;
    int numcpy = num; int reverse = 0;
    while (numcpy > 0){
        reverse = reverse*10 + numcpy%10;
        numcpy = numcpy/10;
    }
    if (reverse == num) return 1;
    else return 0;
}

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for (int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int sum = 0;
    for (int i =0; i<a; i++){
        if (palindrome(myarray[i])) sum++;
    }
    printf("%d", sum);

}