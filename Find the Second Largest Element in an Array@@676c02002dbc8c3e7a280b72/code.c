#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // for INT_MIN

int max_ele(int myarray[], int a) {
    int maxx = INT_MIN; // safer initialization
    for(int i = 0; i < a; i++) {
        if (myarray[i] > maxx) { // strictly greater for max value
            maxx = myarray[i];
        }
    }
    return maxx;
}

int main() {
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc(a * sizeof(int));
    
    for (int i = 0; i < a; i++) {
        scanf("%d", &myarray[i]);
    }
    
    int maxele = max_ele(myarray, a);
    
    // Set the maximum element(s) to 0
    for (int i = 0; i < a; i++) {
        if (myarray[i] == maxele) {
            myarray[i] = 0;
        }
    }
    
    // Find the second largest element
    int secondlarg = max_ele(myarray, a);
    printf("%d", secondlarg);
    
    free(myarray); // Don't forget to free the allocated memory
    return 0;
}