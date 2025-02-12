#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d", &a);
    int *myvec = malloc((a) * sizeof(int));
    for(int i =0;i<a;i++){
        scanf("%d", &myvec[i]);
    }
    int i = 0; int flag = 0;
    for(int j =i+1; j<a+1; j++){
        if (myvec[i] < myvec[j]) {
            flag++;
        } else {
            flag = 0;
            i++;
            j=0;
        }
        if (j == a-1) j = 0;
        
        if(i == a-1) {
            break;
        }

        if (flag == a - i - 1) {
            printf("%d", myvec[i]);
        }

        
    }
}