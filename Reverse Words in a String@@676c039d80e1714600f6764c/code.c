// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// void removespace(char myar[], int n){
//     for(int i =0;i<n;i++){
        
//         if (myar[i] == ' '){
//             leftshift(myar, n, i);
//             i = i-1;
//         }
//         else {
//             myar[i] = tolower(myar[i]);
//         }
//     }
// }

// void reverse(char mystr[], int len){
//     if (len %2 == 0){
//         for (int i = 0; i<len/2; i++){
//             char temp = mystr[i];
//             mystr[i] = mystr[len-i-1];
//             mystr[len-i-1] = temp;
//         }
//     }
//     else {
//         for (int i = 0; i<(len-1)/2; i++){
//             char temp = mystr[i];
//             mystr[i] = mystr[len-i-1];
//             mystr[len-i-1] = temp;
//         }
//     }
// }

// int main(){
//     char mystr[100][100]; char inputstr[100]; char inpstr[100];
//     fgets(inputstr, 100, stdin);
//     strcpy(inpstr, inputstr);
//     char *token = strtok(inpstr, " \n"); int word = 0;
//     while(token!= NULL){
//         word++;
//         token = strtok(NULL, " \n");
//     }
//     char *tok = strtok(inputstr, " \n");
//     for(int i =0; i<word; i++){
//         strcpy(mystr[i], tok);
//         tok = strtok(NULL, " \n");
//     }
//     for(int i =0; i<word; i++){
//         reverse(mystr[i], strlen(mystr[i]));
//     }
//     for(int i =0; i<word; i++){
//         printf("%s ", mystr[i]);
//     }


// }

#include <stdio.h>
#include <string.h>

// Function to reverse characters from start to end index
void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character if present

    int i = 0, start = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            reverse(str, start, i - 1); // Reverse current word
            start = i + 1;              // Move to next word
        }
        i++;
    }
    reverse(str, start, i - 1); // Reverse the last word

    printf("%s ok ok \n", str);
    return 0;
}