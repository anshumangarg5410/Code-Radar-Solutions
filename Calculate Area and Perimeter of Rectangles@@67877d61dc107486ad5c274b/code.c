#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct rectangle {
    float length;
    float breadth;
} rectangle;

int main(){
    int a;
    scanf("%d", &a);
    rectangle r[a];
    for(int i = 0; i<a; i++){
        scanf("%f %f", &r[i].length, &r[i].breadth);
    }
    for(int i =0;i<a;i++){
        float area = r[i].length * r[i].breadth;
        float perimeter = r[i].length + r[i].breadth;
        printf("Rectangle %d: Area = %.2f, Perimeter = %.2f\n", i+1, area, perimeter);
    }
    

}