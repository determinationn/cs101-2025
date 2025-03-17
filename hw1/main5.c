#include <stdio.h>

void print_num_pyramid(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            if (j == i - 1) {
                printf("%d", i);
            } else {
                printf("%d ", i);
            }
        }
        printf("\n");
    }
}

int main() {
    int rows;
    scanf("%d", &rows);
    
    print_num_pyramid(rows);

    return 0;
}