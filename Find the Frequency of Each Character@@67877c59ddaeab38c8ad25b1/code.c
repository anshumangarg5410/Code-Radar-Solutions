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

int seeenin(char target, char seenin[], int a){
    for(int i =0; i<a; i++){
        if (seenin[i] == target) return 1;
    }
    return 0;
}

int main(){
    char mystr[100];
    scanf("%s", mystr);
    int len = strlen(mystr);
    char seenin[100]; int countt = 0;
    for(int i = 0; i<len; i++){
        if (!(seeenin(mystr[i], seenin, countt))) {
            printf("%c: %d\n", mystr[i], count(mystr, len, mystr[i]));
            seenin[countt++] = mystr[i];
            seenin[countt] = '\0';
            }
        
    }
}