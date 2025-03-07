#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    scanf("%d",&a);
    int *myarr = malloc(a*(sizeof(int)));
    for(int i = 0;i<a;i++) {
        scanf("%d",&myarr[i]);
    }
    int b;
    scnaf("%d",&b);
    for(int i = 0;i<a;i++) {
        for(int j = 0;j<a;j++) {

            if (a[i]+a[j] == b) {
                printf("%d %d",i,j);
            }
        }
    }

}