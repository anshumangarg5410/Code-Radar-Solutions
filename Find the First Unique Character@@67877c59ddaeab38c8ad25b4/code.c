#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int repcheck(char arr[], int n, char target){
    int count = 0;
    for(int i =0; i<n; i++){
        if (arr[i] == target) count++;
    }
    return count;
}

int main(){
    char mystr[100];
    fgets(mystr, 100, stdin);
    int len = strlen(mystr);
    for(int i =0; i<len; i++){
        if (repcheck(mystr, len, mystr[i]) == 1) {
            printf("%c", mystr[i]);
            return 1;
        }
    }
    printf("-");
    return 0;

}