#include<stdio.h>

struct book {
    char title[30];
    char author[30];
    int price;
} b[3];

int main() {
    for (int i = 0; i < 3; i++) {
        printf("Enter the title of the %dth book: ", i + 1);
        scanf("%s", &b[i].title);
        printf("Enter the author of the book: ");
        scanf("%s", &b[i].author);
        printf("Enter the price of the book: ");
        scanf("%d", &b[i].price);
        printf("\n");
    }
    
    int highest = 0;
    int lowest = 0;

    for (int i = 1; i < 3; i++) {
        if (b[i].price > b[highest].price) {
            highest = i;
        }
        if (b[i].price < b[lowest].price) {
            lowest = i;
        }
    }

    printf("\nThe high priced book: ");
    printf("\nTitle: %s", b[highest].title);
    printf("\nAuthor: %s", b[highest].author);
    printf("\nPrice: %d", b[highest].price);
    printf("\n\nThe low priced book: ");
    printf("\nTitle: %s", b[lowest].title);
    printf("\nAuthor: %s", b[lowest].author);
    printf("\nPrice: %d", b[lowest].price);
}
