#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count(char myar[], int n, char target){
    int count = 0;
    for(int i =0;i<n;i++){
        if (myar[i] == target) count++;
    }
    return count;
}

int seenin(char myar[], char seenin[], int a, int n){
    for(int i =0; i<a; i++){
        for(int j =0; j<n; j++){
            if (myar[i] == seenin[j]) return 1;
        }
    }
    return 0;
}

int main(){
    char mystr[100];
    scanf("%s", mystr);
    int len = strlen(mystr);
    char seenin[100]; int count = 0;
    for(int i = 0; i<len; i++){
        if (!(seenin(mystr[], seenin[], len, count))) printf("%c: %d\n", mystr[i], count(mystr, len, mystr[i]));
        else {
            seenin[count++] = mystr[i];
            seenin[count] = '\0';
        }
        
    }
}