#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
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
    int inmarks;
    scanf("%d", &inmarks);
    int found = 0;
    for (int i = 0; i < a; i++) {
        if (s[i].rollnumber == inmarks) {
            printf("Roll Number: %d\n", s[i].rollnumber);
            printf("Name: %s\n", s[i].name);
            printf("Marks: %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }
}