#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void leftshift(char myar[], int n, int index){
    for(int i =index; i<n-1; i++){
        myar[i] = myar[i+1];
    }
    myar[n-1] = '\0';
}

int unique(char myar[], int a, int target){
    int count = 0;
    for(int i = 0;i<a; i++){
        if (myar[i] == target) count++;
    }
    if (count == 1) return 1;
    else return 0;
}

int main(){
    char myar[100];
    fgets(myar, 100, stdin);
    myar[strcspn(myar, "\n")] = '\0';
    int len = strlen(myar);
    for(int i =len-1; i>=0; i--){
        if (!unique(myar, len, myar[i])) leftshift(myar, len, i);
    }
    printf("%s", myar);
}