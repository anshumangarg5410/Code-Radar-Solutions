#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void rotate(char arr[], int n){
    for(int i =0; i<n; i++){
        if (i == 0){
            char temp = arr[0];
            arr[0] = arr[n-1];
            arr[n-1] = temp;
        }
        else {
            char temp = arr[i];
            arr[i] = arr[i-1];
        }
    }
}

int main () { 
    char mystr[100];
    int len = strlen(mystr);
    fgets(mystr, 100, stdin);
    char myrot[100]; char myrotcpy[100];
    scanf(" %s", myrot);
    strcpy(myrotcpy, myrot);
    rotate(myrotcpy, len);
    for(int i =0; i<len; i++){
        printf("%c", mystr[i]);
    }
}