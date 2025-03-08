#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char mystr[100][100]; char inputstr[100]; char inpstr[100]; char target[100];
    fgets(inputstr, 100, stdin);
    strcpy(inpstr, inputstr);
    scanf(" %s", target);
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
        if (strcpy(mystr[i], target) == 0) {
            printf("Yes");
            return 1;
        }
    }
    printf("No");


}