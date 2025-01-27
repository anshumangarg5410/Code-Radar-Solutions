
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc(a * sizeof(int));
    int *seen = (int *)malloc(a * sizeof(int));
    for (int i = 0; i < a; i++) {
        seen[i] = -1;
    }
    for (int i = 0; i < a; i++) {
        scanf("%d", &myarray[i]);
    }
    for (int i = 0; i < a; i++) {
        int condition = 0;

        for (int o = 0; o < a; o++) {
            if (myarray[i] == seen[o]) {
                condition = 1; 
                break;
            }
        }
        if (!condition) {
            for (int w = 0; w < a; w++) {
                if (seen[w] == -1) { 
                    seen[w] = myarray[i];
                    break;
                }
            }
            int size = 0;
            for (int j = 0; j < a; j++) {
                if (myarray[i] == myarray[j]) size++;
            }
            printf("%d %d\n", myarray[i], size);
        }
    }
    free(myarray);
    free(seen);
    return 0;
}