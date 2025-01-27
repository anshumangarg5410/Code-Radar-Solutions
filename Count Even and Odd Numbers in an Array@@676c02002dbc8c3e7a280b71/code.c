#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int *myarray = (int *)malloc((a)*sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int even = 0;
    int odd = 0;
    for (int i = 0;i<a;i++){
        if (myarray[i] %2 == 0) even++;
        else odd++;
    }
    printf("%d %d", even, odd);
    return 0;
}