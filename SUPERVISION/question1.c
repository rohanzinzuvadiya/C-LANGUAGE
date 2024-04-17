#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Define the Book structure
struct Book {
    int book_id;
    char book_title[100];
    char book_author[100];
    char book_genre[50];
    char book_publisher[50];
    int book_publication_year;
    float book_price;
};

int main() {
    int n;
    struct Book books[MAX_BOOKS];

    // Ask the user for the number of books
    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Make sure the user doesn't enter more than MAX_BOOKS
    if (n > MAX_BOOKS) {
        printf("Maximum number of books exceeded.\n");
        return 1;
    }

    // Get the book details from the user
    for (int i = 0; i < n; i++) {
        printf("\nEnter book %d details:\n", i+1);

        // Get the book ID
        printf("Book ID: ");
        scanf("%d", &books[i].book_id);

        // Get the book title
        printf("Book Title: ");
        scanf("%s", books[i].book_title);

        // Get the book author
        printf("Book Author: ");
        scanf("%s", books[i].book_author);

        // Get the book genre
        printf("Book Genre: ");
        scanf("%s", books[i].book_genre);

        // Get the book publisher
        printf("Book Publisher: ");
        scanf("%s", books[i].book_publisher);

        // Get the book publication year
        printf("Book Publication Year: ");
        scanf("%d", &books[i].book_publication_year);

        // Get the book price
        printf("Book Price: ");
        scanf("%f", &books[i].book_price);
    }

    // Print the book records
    printf("\nBook Records:\n");
    for (int i = 0; i < n; i++) {
        printf("\nBook %d:\n", i+1);

        // Print the book ID
        printf("Book ID: %d\n", books[i].book_id);

        // Print the book title
        printf("Book Title: %s\n", books[i].book_title);

        // Print the book author
        printf("Book Author: %s\n", books[i].book_author);

        // Print the book genre
        printf("Book Genre: %s\n", books[i].book_genre);

        // Print the book publisher
        printf("Book Publisher: %s\n", books[i].book_publisher);

        // Print the book publication year
        printf("Book Publication Year: %d\n", books[i].book_publication_year);

        // Print the book price
        printf("Book Price: %.2f\n", books[i].book_price);
    }

    return 0;
}