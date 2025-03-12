#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct subscription {
    char name[100];
    char type[20];
    float cost;
} subscription;

int main() {
    int n;
    scanf("%d", &n);
    subscription s[n];

    int basicCount = 0, standardCount = 0, premiumCount = 0;
    float basicRevenue = 0.0, standardRevenue = 0.0, premiumRevenue = 0.0;

    for(int i = 0; i < n; i++) {
        scanf("%s %s %f", s[i].name, s[i].type, &s[i].cost);

        if (strcmp(s[i].type, "Basic") == 0) {
            basicCount++;
            basicRevenue += s[i].cost;
        }
        else if (strcmp(s[i].type, "Standard") == 0) {
            standardCount++;
            standardRevenue += s[i].cost;
        }
        else if (strcmp(s[i].type, "Premium") == 0) {
            premiumCount++;
            premiumRevenue += s[i].cost;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; ", basicCount, basicRevenue);
    printf("Standard: %d Users, Revenue: %.2f; ", standardCount, standardRevenue);
    printf("Premium: %d Users, Revenue: %.2f\n", premiumCount, premiumRevenue);

    return 0;
}
