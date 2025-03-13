#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int unique(char target, int a){
    int count = 0;
    char alphabet[52];
    for (int i = 0; i < 26; i++) {
        alphabet[i] = 'a' + i;       
        alphabet[i + 26] = 'A' + i;  
    }
    for(int i = 0;i<a; i++){
        if (alpha[i] == target) count++;
    }
    if (count >= 1) return 1;
    else return 0;
}

int main(){
    char myar[100];
    fgets(myar, 100, stdin);
    myar[strcspn(myar, "\n")] = '\0';
    int len = strlen(myar);
    for(int i =0; i<len; i++){
        if (!unique(myar[i], len)) {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}