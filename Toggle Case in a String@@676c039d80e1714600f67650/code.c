#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char mystr[100];
    fgets(mystr, 100, stdin);
    int len = strlen(mystr);
    for(int i =0; i<len; i++){
        if (isupper(mystr[i])) mystr[i] = tolower(mystr[i]);
        else if (islower(mystr[i])) mystr[i] = toupper(mystr[i]);
    }
    printf("%s", mystr);
}