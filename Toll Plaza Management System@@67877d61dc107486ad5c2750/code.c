#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct vehicle {
    char number[20];
    char type[10];
    float toll;
} vehicle;

int main(){
    int n;
    scanf("%d", &n);
    vehicle v[n];

    float carToll = 0.0, truckToll = 0.0, bikeToll = 0.0;

    for(int i = 0; i < n; i++){
        scanf("%s %s %f", v[i].number, v[i].type, &v[i].toll);

        if (strcmp(v[i].type, "Car") == 0){
            carToll += v[i].toll;
        }
        else if (strcmp(v[i].type, "Truck") == 0){
            truckToll += v[i].toll;
        }
        else if (strcmp(v[i].type, "Bike") == 0){
            bikeToll += v[i].toll;
        }
    }

    printf("Cars: %.2f, Trucks: %.2f, Bikes: %.2f\n", carToll, truckToll, bikeToll);
    return 0;
}