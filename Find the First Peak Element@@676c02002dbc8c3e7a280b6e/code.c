// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     int *myarray = (int *)malloc((a+1) * sizeof(int));
//     for (int i = 0; i<a+1; i++){
//         scanf("%d", &myarray[i]);
//     }
//     int condition = 0;
//     int result;
//     for (int i =1; i<a;i++){
//         if (myarray[i] > myarray[i-1] && myarray[i] > myarray[i+1]){
//             condition = 1;
//             result = myarray[i];
//             break;
//         }
//     }
//     if (condition){
//         printf("%d", result);
//     }
//     else printf("%d", -1);
// }


#include<stdio.h>

int main(){

    int n;    

    scanf("%d", &n);

    int lst[n];

    for (int i = 0; i<n; i++){

        scanf("%d", &lst[i]);

    }
    lst[n] = 0;
    for (int i = 1; i<n;i++){

        if (lst[i]>lst[i-1] && lst[i]>lst[i+1]){

            printf("%d", lst[i]);

            return 0;

        }

    }

    printf("-1");

    return 0;

}