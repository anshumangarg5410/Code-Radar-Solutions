#include<stdio.h>
#include<stlib.h>
#include<string.h>

typedef struct student{
    int rollnumber;
    char name[100];
    float marks;
} student;

int max(struct s[], int n){
    int current = s1.rollnumber;
    for(int i =0; i<n; i++){
        if (s[i].rollnumber > s[current].rollnumber) current = i;
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
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f", s[0].rollnumber, s[0].name, s[0].marks);

}