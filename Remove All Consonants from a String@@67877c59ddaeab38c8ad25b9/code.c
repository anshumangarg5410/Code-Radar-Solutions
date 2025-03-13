#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void leftshift(char myar[], int n, int index){
    for(int i =index; i<n-1; i++){
        myar[i] = myar[i+1];
    }
    myar[n-1] = '\0';
}

int vowelcheck(char target){
    char vowel[10] = {'a', 'e', 'o', 'i', 'u', 'A', 'E', 'I', 'O', 'U'};
    for(int i =0; i<10; i++){
        if (vowel[i] == target) return 1;
    }
    return 0;
}

int main(){
    char arr[100]; char copyarr[100];
    strcpy(copyarr, arr);
    fgets(arr, 100, stdin);
    int len = strlen(arr);
    for(int i =0; i<len; i++){
        if (!vowelcheck(copyarr[i])) {
            leftshift(arr, len, i);
        }
    }
    printf("%s", arr);
}