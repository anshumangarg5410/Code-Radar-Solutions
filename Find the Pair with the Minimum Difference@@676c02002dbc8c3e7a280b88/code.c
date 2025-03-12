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
    int first, second, summ;
    for(int i =0;i<a;i++){
        for(int j =i+1; j<a; j++){
            summ = abs(myarr[i] - myarr[j]);
            if (summ < diff) {
                diff = summ;
                first = myarr[i]; second = myarr[j];
                // printf("-- %d %d %d --\n", first, second, summ);
            }
            else if (summ == diff){
                if ((myarr[i] + myarr[j]) < first + second) {
                    first = myarr[i]; second = myarr[j];
                    diff = summ;
                }
            }
        }
    }
    if (first > second) printf("%d %d", second, first);
    else printf("%d %d", first, second);

}