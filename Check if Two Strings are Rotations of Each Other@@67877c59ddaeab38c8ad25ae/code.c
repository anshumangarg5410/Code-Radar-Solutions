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
    fgets(mystr, 100, stdin);
    char myrot[100]; char myrotcpy[100];
    scanf(" %s", myrot);
    int len = strlen(mystr); 
    strcpy(myrotcpy, myrot);
    int len2 = strlen(myrotcpy);
    printf("%d", len2);
    rotate(myrotcpy, len);
    for(int i =0; i<len; i++){
        printf("%c", myrotcpy[i]);
    }
}