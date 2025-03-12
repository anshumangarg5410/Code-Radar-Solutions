   
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
    int rollnumber;
    char name[100];
    float marks;
} student;

void bubblesort(student s[], int a) {
    for (int i = 0; i < a - 1; i++) {
        for (int j = 0; j < a - i - 1; j++) {
            if (s[j].marks > s[j + 1].marks) {
                // Swap entire structure
                student temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
}

int main(){
    int a;
    scanf("%d", &a);
    student s[a];
    for(int i = 0; i<a; i++){
        scanf("%d %s %f", &s[i].rollnumber, &s[i].name, &s[i].marks);
    }
    bubblesort(s, a);

    for (int i = 0; i<a; i++){
        printf("Roll Number: %d, Name: %s, Marks: %.2f", s[i].rollnumber, s[i].name, s[i].marks);
        printf("\n");
    }

}
   
