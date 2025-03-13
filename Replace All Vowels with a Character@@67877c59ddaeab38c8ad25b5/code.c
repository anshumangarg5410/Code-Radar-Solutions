#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int find(char myar[], int a, char target){
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for(int i = 0; i<10; i++){
        if (vowels[i] == target) return 1;
    }
    return 0;
}

int main(){
    char myar[100];
    scanf("%d", myar);
    printf("%s", myar);
    int len = strlen(myar);
    char ele;
    scanf("%c", &ele);
    for(int i =0; i<len; i++){
        if (find(myar, len, myar[i])) myar[i] = ele;
    }
    printf("%s", myar);
}