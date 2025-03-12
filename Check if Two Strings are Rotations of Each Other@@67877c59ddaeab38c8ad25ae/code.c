#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void rotate(char arr[], int n){
    char temp = arr[0];
    for(int i =1;i<n;i++){
        char tempp = arr[i];
        arr[i] = temp;
        temp = tempp;
    }
    arr[0] = last
}

int main () { 
    char mystr[100];
    scanf("%s", mystr);
    int len = strlen(mystr);
    char givenrotstr[100];
    scanf("%s", givenrotstr);
    for (int i =0;i<len;i++){
        rotate(mystr, len);
        // printf("\n------\n");
        // for(int i =0;i<len;i++){
        //     printf("%c", mystr[i]);
        // }
        if (strcmp(mystr, givenrotstr) == 0){
            printf("Yes");
            return 0;
        }
        }
    printf("No");
}
