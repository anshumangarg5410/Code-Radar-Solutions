#include <stdio.h>
#include<ctype.h>

int main() {
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'I', 'E', 'O', 'U'};
    char integ;
    int condition = 0;
    scanf("%c");
    if (isdigit(integ)){
        printf("Digit");
    }
    else if(isaplha){
        for (int i =0; i<10; i++){
            if (integ == vowels[i]){
                printf("Vowel");
                contidion = 1;
                return 0;
            }
            
        }
        if (condition = 0){
            printf("Consonant");
        }
    }
    else {
        printf("Special Character");
    }
    return 0;
}