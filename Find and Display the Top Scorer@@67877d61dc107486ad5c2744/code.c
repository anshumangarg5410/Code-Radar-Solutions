#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student{
    int rollnumber;
    char name[100];
    float marks;
} student;

int max(struct student s[], int n){
    int current = 0;
    for(int i =0; i<n; i++){
        if (s[i].marks > s[current].marks) current = i;
    }
    return current;
}

int main(){
    int a;
    scanf("%d", &a);
    student s[a];
    for(int i =0; i<a; i++){
        scanf("%d %s %f", &s[i].rollnumber, &s[i].name, &s[i].marks);
    }
    int result = max(s, a);
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f", s[result].rollnumber, s[result].name, s[result].marks);

}