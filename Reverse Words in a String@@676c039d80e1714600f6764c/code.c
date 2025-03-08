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
    char mystr[100][100]; char inputstr[100]; char inpstr[100];
    fgets(inputstr, 100, stdin);
    strcpy(inpstr, inputstr);
    char *token = strtok(inpstr, " \n"); int word = 0;
    while(token!= NULL){
        word++;
        token = strtok(NULL, " \n");
    }
    char *tok = strtok(inputstr, " \n");
    for(int i =0; i<word; i++){
        strcpy(mystr[i], tok);
        tok = strtok(NULL, " \n");
    }
    for(int i =0; i<word; i++){
        printf("%s - ", mystr[i]);
    }


}