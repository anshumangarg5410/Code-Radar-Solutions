#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char mystr[100][100]; int j=0; int words = 0;
    while (1) {
        scanf("%s", &mystr[j]);
        j++;
        if (mystr[j] == "\0") break;
        words++;
    }
    printf("%d", words);
}