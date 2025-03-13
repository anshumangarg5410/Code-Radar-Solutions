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
    char arr[100]; 
    fgets(arr, 100, stdin);
    arr[strcspn(arr, "\n")] = '\0';
    int len = strlen(arr);
    int j =0;
    for(int i =0; i<len; i++){
        if (!vowelcheck(arr[j]) && arr[j] != ' ') {
            leftshift(arr, len, j);
        }
        else j++;
    }
    printf("%s", arr);
}