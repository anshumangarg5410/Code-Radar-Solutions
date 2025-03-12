#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef student struct {
    int rollnumber;
    char name[100];
    float marks;
} student;

int main(){
    int a;
    scanf("%d", &a);
    student s[a];
    for(int i = 0; i<a; i++){
        scanf("%d %s %f", &s[i].rollnumber, &s[i].name, &s[i].student);
    }
    float threshold;
    scanf("%f", &threshold);
    int count = 0;
    for(int i =0; i<a; i++){
        if (s[i].marks > threshold) count++;
    }
    printf("Count of students scoring above %d: %d", threshold, count);
}