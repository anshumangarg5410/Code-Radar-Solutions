#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i =0; i<a; i++){
        int count1 =1;
        int count2 = i;

        for(int h=a-i-1; h>0; h--){
            printf(" ");
        }

        for(int j=0; j<=i; j++){
            printf("%d", count1);
            count1++;
        }
        // if (i==0) printf("");

        if (i > 0){
            for (int u = 0; u<=i; u++){
                while (count2>0){
                    printf("%d", count2);
                    count2--;
                }
            }
        }

        printf("\n");
    }
    return 0;
}