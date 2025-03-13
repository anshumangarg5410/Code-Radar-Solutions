#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int palindrome(char mystr[], int n) {
    char rev[100];
    for (int i = 0; i < n; i++) rev[i] = mystr[n - 1 - i];
    rev[n] = '\0';      
    mystr[n] = '\0';    
    if (strcmp(mystr, rev) == 0) return 1;
        return 0;
}

int main(){
    char mystr[100];
    scanf("%s", mystr);
    int n = strlen(mystr);
    for(int i =0 ;i<n; i++){
        int k =1;
        char temp[100];
        temp[0] = mystr[i];
        for(int  j =i+1; j<n; j++){
            temp[k] = mystr[j];
            if (palindrome(temp, k+1)) {
                for(int o =0; o<k+1; o++){
                    printf("%c", temp[o]);
                }
                return 0;
            }
            k++;
        }
    }
}