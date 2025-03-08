#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char[100] mystr;
    fgets(mystr, 100, stdin); int j =0; int max = 0; int maxindex = 0;
    for(int i =0; i<=strlen(mystr); i++){
        int tempmax=0;
        if (mystr[i] == mystr[j]) {
            tempmax++; 
        }
        if (i == strlen(mystr) - 1){
            if (tempmax > max) {
                max = tempmax;
                maxindex = j;
            }
            i = -1;
            j++;
        }
        if (j == strlen(mystr) - 1) break;
    }
    printf("%c", mystr[maxindex]);
}