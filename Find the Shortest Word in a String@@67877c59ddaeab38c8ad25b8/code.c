#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    int maxxi = strlen(mystr[0]); char result[100];
    strcpy(result, mystr[0]);
    for(int i =1;i<word;i++){
        if(strlen(mystr[i]) < maxxi){
            strcpy(result, mystr[i]);
            maxxi = strlen(mystr[i]);
        }
    }
    printf("%s", result);

}