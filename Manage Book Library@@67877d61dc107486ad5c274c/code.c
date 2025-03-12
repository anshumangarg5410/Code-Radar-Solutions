#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct book{
    char name[100];
    char author[100];
    int marks;

} book;

int main(){
    int a;
    scanf("%d", &a);
    book b[a];
    for(int i =0; i<a; i++){
        scanf("%s %s %d", &b[i].name, &b[i].author, &b[i].marks);
    }
    float target;
    scanf("%f", &target);
    printg("Books above price %.2f:\n", target);
    for(int i =0; i<a; i++){
        if (b[i].marks > target) {
            printf("Title: %s, Author: %s, Price: %d\n", b[i].name, b[i].author, b[i].marks);
        }

    }

}