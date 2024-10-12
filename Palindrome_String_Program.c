#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to reverse a string
void reverse_string(char* str, char* reverse, int length) {
    int i;
    for (i = 0; i < length; i++)
        reverse[i] = str[length - i - 1];
    reverse[length] = '\0';
}

// Function to check palindrome
bool is_palindrome(const char* str) {
    int length = strlen(str);
    char reverse[length + 1];

    reverse_string(str, reverse, length);

    return strcmp(str, reverse) == 0;
}

int main() {
    char str[100];

    // Input a string
    printf("Enter a string: ");
    scanf("%99s", str); // Prevent buffer overflow

    // Check if palindrome
    if (is_palindrome(str))
        printf("%s is a palindrome string.\n", str);
    else
        printf("%s is not a palindrome string.\n", str);

    return 0;
}
