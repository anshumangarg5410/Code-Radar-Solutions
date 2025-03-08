#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int freq(char arr[], int size, char target){
    int count = 0;
    for(int i =0; i<size; i++){
        if (arr[i] == target) count++;
    }
    return count;
}

int main(){
    char mystr1[100]; char mystr2[100];
    fgets(mystr1, 100, stdin);
    fgets(mystr2, 100, stdin);
    int len1 = strlen(mystr1); int len2 = strlen(mystr2);
    int comar1; int comar2;
    if (len1 != len2) {printf("No"); return 0;}
    int j = 0;
    for(int i =0; i<=len1; i++){
        int target = mystr1[j]; 
        if (mystr[i] == target) {
            comar1 = freq(mystr1, len1, target);
            comar2 = freq(mystr2, len2, target);
            if (comar1 != comar2) {
                printf("No");
                return 0;
            }
        }
        if (i == len1 - 1){
            i = -1;
            j++;
        }
        if (j == len1) break;
 
    }
    printf("Yes");

    
}