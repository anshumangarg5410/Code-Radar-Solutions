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


int main() {
    char mystr[100];
    scanf("%s", mystr);       
    int n = strlen(mystr);
    for (int i = 0; i < n; i++) {
        char temp[100]; char palindrome[100][100];
        int k = 0; int count = 0;
        for (int j = i; j < n; j++) {
            temp[k++] = mystr[j];
            temp[k] = '\0';    
            if (k >= 2 && palindrome(temp, k)) {
                strcpy(palindrome[count], temp);  
                printf("%s\n", temp);  
                count++;           
            }
        }
    }
    printf("%c", mystr[0]);
}