#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
    int rollnumber;
    char name[100];
    float marks;
} student;

int main(){
    int a;
    scanf("%d", &a);
    student s[a];
    float summ = 0;
    for(int i =0; i<a; i++){
        summ += s[i].marks;
    }
    printf("Average Marks: %.2f", summ);
}