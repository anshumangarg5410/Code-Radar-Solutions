#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char mystr[100];
    fgets(mystr, 100, stdin); int j =0; int max = 0; int maxindex = 0;int tempmax=0;
    int len = strlen(mystr);
    for(int i =0; i<=len; i++){
        if (mystr[i] == mystr[j]) {
            tempmax++; 
        }
        if (i == len - 1){
            if (tempmax > max) {
                max = tempmax;
                maxindex = j;
                
            }
            else if (tempmax == max){
                if (mystr[i] > mystr[j]) maxindex = j;
                else maxindex = i;
            }
            tempmax = 0;
            i = -1;
            j++;
        }
        if (j == len - 1) break;
    }
    printf("%c", mystr[maxindex]);
}