// Develop a C program that uses structures to represent a book (with attributes like title, author, and price). List N number of books' details using Array of objects.

#include <stdio.h>

struct book {

    char title[50];
    char author[50];
    float price;
};

int main() {
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);

    struct book books[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title); 
        printf("Author: ");
        scanf(" %[^\n]", books[i].author); 
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\nBook Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}

