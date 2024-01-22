#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(const char *str) {
    int len = strlen(str);
    
    // Check each character from start and end towards the middle
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            // If characters don't match, not a palindrome
            return 0; // False
        }
    }
    
    // If loop completes, the string is a palindrome
    return 1; // True
}

int main() {
    char input[100]; // Assume a maximum string length of 100 characters

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", input);

    // Check if the input string is a palindrome
    if (isPalindrome(input)) {
        printf("%s is a palindrome.\n", input);
    } else {
        printf("%s is not a palindrome.\n", input);
    }

    return 0;
}

