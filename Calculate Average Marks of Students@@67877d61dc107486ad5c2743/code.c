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
    for(int i =0; i<a; i++){
        scanf("%d %s %f", &s[i].rollnumber, &s[i].name, &s[i].marks);
    }
    float summ = 0;
    for(int i =0; i<a; i++){
        summ += s[i].marks;
    }
    printf("Average Marks: %.2f", summ/a);
}