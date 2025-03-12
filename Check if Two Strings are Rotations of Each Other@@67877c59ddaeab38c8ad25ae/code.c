#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void rotate(char arr[], int n){
    char last = arr[n-1];char temp = arr[0];
    for(int i =1;i<n;i++){
        char tempp = arr[i];
        arr[i] = temp;
        temp = tempp;
        if (i == n-1) arr[0] = last;
    }
}

int main () { 
    char mystr[100];
    fgets(mystr, 100, stdin);
    int len = strlen(mystr);
    char givenrotstr[100];
    scanf(" %d", givenrotstr);
    for (int i =0;i<len;i++){
        rotate(mystr, len);
        printf("------\n");
        for(int i =0;i<len;i++){
            printf("%c", mystr[i]);
        }
        if (strcmp(mystr, givenrotstr) == 0){
            printf("Yes");
            return 0;
        }
        }
    printf("No");
}
