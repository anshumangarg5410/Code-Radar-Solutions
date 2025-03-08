#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char mystr[], int len){
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
}

int main(){
    int mystr[100][100]; int inpstr[100];
    fgets(inpstr, 100, stdin);
    char *token = strtok(inpstr, " \n"); int word = 0;
    while(token!= NULL){
        word++;
        token = strtok(NULL, " \n");
    }
    printf("%d", word);


}