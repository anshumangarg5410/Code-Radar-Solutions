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
    for(int i = 0; i<a; i++){
        scanf("%d %s %f", &s[i].rollnumber, &s[i].name, &s[i].marks);
    }
    for(int i =0; i<a; i++){
        if (!(s[i].marks > 50.00)) {
            printf("Not all Passed");
            return 0;
        }
    }
    printf("All Passed");
    

}