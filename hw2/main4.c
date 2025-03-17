#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Books {
    int id;
    int price;
    char title[100];
} book_t;

void total_price(book_t books[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += books[i].price;
    }
    printf("%d\n", total);
}

void list_books(book_t books[], int size, int id) {
    if (id >= 1 && id <= size) {
        printf("%d %s\n", books[id - 1].price, books[id - 1].title);
    }
}

int main() {
    book_t books[] = {
        {1, 1000, "All the Light We Cannot See"},
        {2, 300, "The 38 Letters from J.D. Rockefeller to his son"},
        {3, 1000, "The Ballad of Songbirds and Snakes"},
        {4, 550, "Killers of the Flower Moon"},
        {5, 870, "Elon Musk"},
        {6, 1344, "Milk and Honey 12-Month 2024"}
    };
    int size = sizeof(books) / sizeof(books[0]);
    
    int input;
    scanf("%d", &input);
    
    if (input == 0) {
        total_price(books, size);
    } else if (input >= 1 && input <= size) {
        list_books(books, size, input);
    }
    
    return 0;
}
