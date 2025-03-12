#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
    int rollnumber;
    char name[100];
    float marks;
} student;

char gradecheck(float marks){
    if (marks >= 85.00) return 'A';
    else if (marks >= 70.00 && marks < 85.00) return 'B';
    else return 'C';
}

int main(){
    int a;
    scanf("%d", &a);
    student s[a];
    for(int i = 0; i<a; i++){
        scanf("%d %s %f", &s[i].rollnumber, &s[i].name, &s[i].marks);
    }
    for(int i =0; i<a; i++){
        printf("Roll Number: %d, Name: %s, Grade: %c\n", s[i].rollnumber, s[i].name, gradecheck(s[i].marks));
    }
}