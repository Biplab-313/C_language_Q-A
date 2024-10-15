#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SNAKE 0
#define WATER 1
#define GUN 2

void print_choice(int choice) {
    switch (choice) {
        case SNAKE:
            printf("Snake\n");
            break;
        case WATER:
            printf("Water\n");
            break;
        case GUN:
            printf("Gun\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}

int main() {
    srand(time(0));
    int player, computer = rand() % 3;

    printf("Choose 0 for Snake, 1 for Water, and 2 for Gun: ");
    scanf("%d", &player);

    printf("You chose: ");
    print_choice(player);
    printf("Computer chose: ");
    print_choice(computer);

    if (player == computer) {
        printf("It's a Draw!\n");
    } else if ((player == SNAKE && computer == WATER) ||
               (player == WATER && computer == GUN) ||
               (player == GUN && computer == SNAKE)) {
        printf("You Win!\n");
    } else {
        printf("You Lose!\n");
    }

    return 0;
}
