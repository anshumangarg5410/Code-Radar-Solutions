#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char mystr[100];
    fgets(mystr, 100, stdin);
    mystr = toupper(mystr);
    printf("%s", mystr);
}