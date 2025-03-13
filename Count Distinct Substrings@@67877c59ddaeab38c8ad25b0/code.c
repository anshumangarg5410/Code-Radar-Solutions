#include <stdio.h>
#include <string.h>

// Function to check if a substring is already found
int isDuplicate(char substrings[][100], int count, char *str) {
    for (int i = 0; i < count; i++) {
        if (strcmp(substrings[i], str) == 0) {
            return 1; // Duplicate found
        }
    }
    return 0; // Not a duplicate
}

// Function to count distinct substrings
int countDistinctSubstrings(char *str) {
    int n = strlen(str);
    char substrings[1000][100]; // Array to store substrings
    int count = 0;

    // Generate all substrings
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            char temp[100]; 
            int k = 0;
            
            // Extract substring from i to j
            for (int x = i; x <= j; x++) {
                temp[k++] = str[x];
            }
            temp[k] = '\0'; // Null terminate the string
            
            // Check if the substring is unique
            if (!isDuplicate(substrings, count, temp)) {
                strcpy(substrings[count], temp); // Store unique substring
                count++; // Increase count
            }
        }
    }

    return count;
}

// Driver Code
int main() {
    char str[100];
    scanf("%s", str); // Input string
    printf("%d\n", countDistinctSubstrings(str));
    return 0;
}