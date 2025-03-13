#include <stdio.h>
#include <string.h>

int isDuplicate(char substrings[][100], int count, char *str) {
    for (int i = 0; i < count; i++) {
        if (strcmp(substrings[i], str) == 0) {
            return 1; 
        }
    }
    return 0;
}

int main() {
    char str[100];
    scanf("%s", str); 
    int n = strlen(str);
    char substrings[1000][100]; 
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            char temp[100]; 
            int k = 0;
            for (int x = i; x <= j; x++) {
                temp[k++] = str[x];
            }
            temp[k] = '\0'; 
            if (!isDuplicate(substrings, count, temp)) {
                strcpy(substrings[count], temp); 
                count++; 
            }
        }
    }
    printf("%d", count);
}