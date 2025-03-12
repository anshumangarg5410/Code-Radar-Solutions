// #include<stdio.h>
// #include<stdlib.h>

// int sumchecker(int a, int b, int target){
//     if (a+b == target) return 1;
//     else return 0;
// }

// int seenin(int arr[], int a, int first, int second){
//     for(int i =0; i<a-1; i++){
//         if (arr[i] == first && arr[i+1] == second) return 1;
//     }

// }

// int main(){
//     int a, target;
//     scanf("%d", &a);
//     int *myarray = malloc(a * sizeof(int));
//     for(int i =0; i<a; i++){
//         scanf("%d", &myarray[i]);
//     }
//     scanf("%d", &target);
//     int j = 0;
//     int result[100];
//     int rescnt = 0;
//     for(int i =j+1; i<a; i++){
//         int first, second;
//         if (sumchecker(myarray[j], myarray[i], target)) {
//             first = myarray[j]; second = myarray[i];
//             // printf("%d %d\n", myarray[j], myarray[i]);
//             if(seenin(arr, a, first, second)) {
//                 result[rescnt] = first; result[rescnt+1] = second;
//                 rescnt += 2;
//             }
//         }
//         if (j == a-1) break;
//         if (i == a-1) {
//             j++;
//             i = j;
//         }
        
//     }


// }


// Your code here...
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int max(int arr[], int a){
    int max = arr[0];
    for(int i =0; i<a; i++){
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

int min(int arr[], int a){
    int min = arr[0];
    for(int i =0; i<a; i++){
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int main(){
    int a;
    scanf("%d", &a);
    int *myarray = malloc(a * sizeof(int));
    for(int i =0; i<a; i++){
        scanf("%d", &myarray[i]);
    }
    int e = 0;
    for(int i = 0;i<a;i++) {
        if(myarray[i] == 1) {
            e++;
        }
    }
    if(e == 0) {
        printf("1");
    } else {
        int maxx = max(myarray,a);
        int minn = min(myarray,a);
        int f = 0;
        for(int i = minn;i<=maxx;i++) {
            int e = 0;
            for(int j = 0;j<a;j++) {
                if((myarray[j] == i) && (myarray[j] >0)) {
                    e++ ;
                }
            }
            if ((e == 0) & (i>0)) {
                printf("%d",i);
                f++;
            }
        }
        if(f == 0) {
            printf("%d",maxx+1);
        }
    }
}