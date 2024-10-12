#include <stdio.h>

// Function to check if a number is palindrome
int is_palindrome(int n) {
    int reverse = 0;
    int original = n;

    while (n != 0) {
        int remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    return (original == reverse);
}

// Function to get user input and validate
int get_user_input() {
    int num;
    while (1) {
        printf("Enter a whole number: ");
        scanf("%d", &num);

        // Check if input is valid
        if (num >= 0) {
            return num;
        } else {
            printf("Invalid input. Please try again.\n");
        }
    }
}

// Function to display menu and handle user choice
void display_menu() {
    printf("Palindrome Checker Program\n");
    printf("---------------------------\n");
    printf("1. Check Palindrome\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;
    int num;

    do {
        display_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                num = get_user_input();
                if (is_palindrome(num)) {
                    printf("%d is a palindrome.\n", num);
                } else {
                    printf("%d is not a palindrome.\n", num);
                }
                break;
            case 2:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 2);

    return 0;
}
