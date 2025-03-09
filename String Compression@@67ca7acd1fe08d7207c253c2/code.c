#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int count(char arr[], char target, int a){
    int count = 0;
    for(int i =0; i<a; i++){
        if (arr[i] == target) count++;
    }
    return count;
}

int checkrep(char arr[], int a, char target){
    for(int i =0; i<a; i++){
        if (arr[i] == target) return 0;
    }
    return 1;
}

int compressString(char arrini[], char arrcomp[]){
    int len = strlen(arrini); int j =0; int h = 0;
    char seen[100];
    for(int i = 0; i < len; i++) {
        char ch = arrini[i]; int freq = count(arrini, ch, len);
        if (checkrep(seen, h, ch)) {
            seen[h++] = ch;  
            arrcomp[j++] = ch; 
            if (freq > 1) {
                char num[10];
                sprintf(num, "%d", freq);  
                for (int k = 0; num[k] != '\0'; k++) {
                    arrcomp[j++] = num[k]; 
                }
            }
        }
}