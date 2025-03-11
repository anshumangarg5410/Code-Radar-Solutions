#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
    int roll;
    char arrayy[100];
    float marks;
} student;

int main(){
    int a;
    scanf("%d", &a);
    student s[a];
    for (int i = 0; i<a; i++){
        scanf("%d ", &s[i].roll);
        scanf(" %s ", &s[i].arrr);
        scanf(" %f", &s[i].marks);
    }
    for (int i = 0; i<a; i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f", s[i].roll, s[i].arrr, s[i].marks);
        printf("\n");
    }

}