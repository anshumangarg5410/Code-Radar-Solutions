#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void palindrome(char mystr[], int n){
    int j = 0; char rev[100];
    for(int i = n-1; i>=0;i++){
        rev[j] = mystr[i];
        j++;
    }
    if (strcmp(mystr, rev) == 0) return 1;
    else return 0;
}

int main(){
    char mystr[100];
    scanf("%s", mystr);
    for(int i =0 ;i<n; i++){
        int k =1;
        char temp[100];
        temp[0] = mystr[i];
        for(int  j =i+1; j<n; j++){
            temp[k] = mystr[j];
            if (palindrome(temp, k+1)) {
                for(int i =0; i<k+1; i++){
                    printf("%c", temp[i]);
                }
                return 0;
            }
        }
    }
}