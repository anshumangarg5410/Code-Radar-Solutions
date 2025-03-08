#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char mystr[100];
    scanf("%s", &mystr);
    char target;
    scanf("%c", &target); int count = 0;
    printf("%s", "%c", mystr, target);
    for(int i =0; i<strlen(mystr); i++){
        if (mystr[i] == target) count++;
    }
    printf("%d", count);
}