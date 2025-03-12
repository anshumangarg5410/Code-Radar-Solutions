#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int i = 0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    int diff = INT_MAX;
    int first, second;
    for(int i =0;i<a;i++){
        for(int j =i+1; j<a; j++){
            int summ = abs(myarr[i] - myarr[j]);
            if (summ < diff) {
                first = myarr[i]; second = myarr[j];
                printf("-- %d %d %d --\n", first, second, summ)
            }
        }
    }
    printf("%d %d", first, second);
    // if (first > second) printf("%d %d", second, first);
    // else printf("%d %d", first, second);

}