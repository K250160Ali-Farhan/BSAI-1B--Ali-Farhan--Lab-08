#include <stdio.h>

int main() {
    int seats[3][3] = {
        {1, 0, 1},
        {0, 0, 1},
        {1, 1, 0}
    };
    int count = 0;
    printf("Available seats are at:\n");
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++) {
            if (seats[row][col] == 0) {
                count++;
                printf("Row %d, Seat %d\n", row + 1, col + 1);
            }
        }
    }
    printf("\nTotal available seats: %d\n", count);
    return 0;
}

