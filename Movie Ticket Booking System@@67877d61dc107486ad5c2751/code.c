#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct movieticket {
    char movie[100];
    char type[20];
    float price;
} movieticket;

int main(){
    int n;
    scanf("%d", &n);
    movieticket m[n];

    float standardTotal = 0.0, premiumTotal = 0.0, vipTotal = 0.0;

    for(int i = 0; i < n; i++){
        scanf("%s %s %f", m[i].movie, m[i].type, &m[i].price);

        if (strcmp(m[i].type, "Standard") == 0) {
            standardTotal += m[i].price;
        }
        else if (strcmp(m[i].type, "Premium") == 0) {
            premiumTotal += m[i].price;
        }
        else if (strcmp(m[i].type, "VIP") == 0) {
            vipTotal += m[i].price;
        }
    }

    printf("Standard: %.2f, Premium: %.2f, VIP: %.2f\n", standardTotal, premiumTotal, vipTotal);
    return 0;
}