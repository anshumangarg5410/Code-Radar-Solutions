#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char mystr[], int start, int end) {
    while (start < end) {
        char temp = mystr[start];
        mystr[start] = mystr[end];
        mystr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    char mystr[100];
    fgets(mystr, 100, stdin);
    str[strcspn(mystr, "\n")] = '\0';
    int i = 0; int start = 0;
    while (mystr[i] != '\0'){
        if (mystr[i] == ' '){
            reverse(mystr, start, i-1);
            start = i+1;
        }
        i++;
    }
    reverse(mystr, start, i - 1);
    printf("%s", mystr);
}