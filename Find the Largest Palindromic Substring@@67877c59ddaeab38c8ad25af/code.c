#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// int palindrome(char mystr[], int n){
//     int j = 0; char rev[100];
//     for(int i = n-1; i>=0;i++){
//         rev[j] = mystr[i];
//         j++;
//     }
//     if (strcmp(mystr, rev) == 0) return 1;
//     else return 0;
// }

int palindrome(char mystr[], int n) {
    char rev[100];

    // Create reversed string
    for (int i = 0; i < n; i++) {
        rev[i] = mystr[n - 1 - i];
    }

    rev[n] = '\0';      // ✅ Fix 1: Null-terminate the reversed string
    mystr[n] = '\0';    // ✅ Fix 2: Temporarily null-terminate original substring

    // Compare both strings
    if (strcmp(mystr, rev) == 0)
        return 1;
    else
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