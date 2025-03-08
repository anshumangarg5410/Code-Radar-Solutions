#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char *mystr = malloc(100 * sizeof(char));
    fgets(mystr, 100, stdin);
    int len = strlen(mystr);
    mystr = realloc(mystr, len);
    if (len %2 == 0){
        for (int i = 0; i<len/2; i++){
            char temp = mystr[i];
            mystr[i] = mystr[len-i-1];
            mystr[len-i-1] = temp;
        }
    }
    else {
        for (int i = 0; i<(len-1)/2; i++){
            char temp = mystr[i];
            mystr[i] = mystr[len-i-1];
            mystr[len-i-1] = temp;
        }
    }
    printf("%s", mystr);
}