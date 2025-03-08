#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char mystr[100]; char tar, rep;
    fgets(mystr, 100, stdin);
    scanf("%d %d", &tar, &rep);
    for(int i =0; i<strlen(mystr); i++){
        if (mystr[i] == tar) mystr[i] = rep;
    }
    printf("%s", mystr);
}