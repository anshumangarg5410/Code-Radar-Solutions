#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char mystr[], int len){

    if (len %2 == 0){
        for (int i = 0; i<len/2; i++){
            char temp = mystr[i];
            mystr[i] = mystr[len-i-1];
            mystr[len-i-1] = temp;
        }
    }
    else {
        for (int i = 0; i<(len-1)/2; i++){
            char temp = mystr[i];
            mystr[i] = mystr[len-i-1];
            mystr[len-i-1] = temp;
        }
    }
}

void leftshift(char myar[], int n, int index){
    for(int i =index; i<n-1; i++){
        myar[i] = myar[i+1];
    }
    myar[n-1] = '\0';
}

void removespace(char myar[], int n){
    for(int i =0;i<n;i++){
        if (myar[i] == ' '){
            leftshift(myar, n, i);
            i = i-1;
        }
    }
}

int main(){
    char *mystr = malloc(100 * sizeof(char));
    fgets(mystr, 100, stdin);
    int len = strlen(mystr);
    mystr = realloc(mystr, len);
    char *reversed = malloc(len * sizeof(char));

    strcpy(reversed, mystr); 
    removespace(reversed, len);

    if (strcmp(mystr, reversed) == 0) printf("Yes");
    else printf("No");

}