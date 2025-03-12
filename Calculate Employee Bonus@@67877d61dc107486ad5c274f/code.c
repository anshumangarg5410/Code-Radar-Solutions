#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee {
    int id;
    char name[100];
    float salary;
} employee;

int main(){
    int n;
    scanf("%d", &n);
    employee e[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }

    for(int i = 0; i < n; i++){
        float bonus;
        if (e[i].salary < 50000) {
            bonus = 0.10 * e[i].salary;
        } else {
            bonus = 0.05 * e[i].salary;
        }

        printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", e[i].id, e[i].name, bonus);
    }

    return 0;
}