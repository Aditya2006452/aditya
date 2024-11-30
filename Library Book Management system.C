#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100 // Maximum number of books

// Structure to store book information
typedef struct {
    int id;
    char title[100];
    char author[100];
} Book;

// Global array of books
Book library[MAX_BOOKS];
int bookCount = 0; // Number of books in the library

// Function to add a book
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &library[bookCount].id);
    getchar(); // Consume newline character
    printf("Enter Book Title: ");
    fgets(library[bookCount].title, 100, stdin);
    strtok(library[bookCount].title, "\n"); // Remove newline
    printf("Enter Book Author: ");
    fgets(library[bookCount].author, 100, stdin);
    strtok(library[bookCount].author, "\n"); // Remove newline

    bookCount++;
    printf("Book added successfully!\n");
}

// Function to search for a book by ID
void searchBook() {
    int id, found = 0;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            printf("Book Found:\n");
            printf("ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}

// Function to display all books
void displayBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("Library Books:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d, Title: %s, Author: %s\n", library[i].id, library[i].title, library[i].author);
    }
}

// Function to delete a book by ID
void deleteBook() {
    int id, found = 0;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            for (int j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1]; // Shift books left
            }
            bookCount--;
            printf("Book with ID %d deleted successfully.\n", id);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book with ID %d not found.\n", id);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nLibrary Book Management System\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Display All Books\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                searchBook();
                break;
            case 3:
                displayBooks();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
    