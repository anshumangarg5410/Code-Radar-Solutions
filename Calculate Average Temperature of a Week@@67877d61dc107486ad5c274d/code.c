#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct temp {
    char name[100];
    float temp;
} temp;

int main(){
    int a;
    scanf("%d", &a);
    student s[a];
    for(int i = 0; i<a; i++){
        scanf("%s %f", &s[i].name, &s[i].temp);
    }
    int summ = 0;
    for (int i =0; i<a; i++){
        summ += s[i].temp;
    }
    printf("%.2f", summ/a);

}