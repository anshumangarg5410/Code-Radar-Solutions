#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int vowelcount(char *str){
    int count = 0;
    for(int i =0; str[i] != '\0'; i++){
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    return count;
}

int main(){
    char *str = (char *)malloc(20 * sizeof(char));
    fgets(str, 20, stdin);
    printf("%d", vowelcount(str));

}