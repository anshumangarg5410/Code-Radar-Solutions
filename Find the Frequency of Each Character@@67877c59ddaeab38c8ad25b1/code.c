#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count(char myar[], int n, char target){
    int count = 0;
    for(int i =0;i<n;i++){
        if (myar[i] == target) count++;
    }
    return count;
}

int main(){
    char mystr[100];
    scanf("%s", mystr);
    int len = strlen(mystr);
    for(int i = 0; i<len; i++){
        printf("%c: %d\n", mystr[i], count(mystr, len, mystr[i]));
    }
}