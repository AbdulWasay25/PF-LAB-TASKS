#include <stdio.h>
#include <string.h>
#define MAX_BOOKS 100
struct Book {
    char title[100];
    char author[100];
    char ISBN[20];
    int publicationYear;
    int isAvailable;  
};
void addBook(struct Book library[], int *bookCount) {
    if (*bookCount >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }
    printf("Enter the title: ");
    scanf(" %[^\n]", library[*bookCount].title);
    printf("Enter the author: ");
    scanf(" %[^\n]", library[*bookCount].author);
    printf("Enter the ISBN: ");
    scanf(" %s", library[*bookCount].ISBN);
    printf("Enter the publication year: ");
    scanf("%d", &library[*bookCount].publicationYear);
    library[*bookCount].isAvailable = 1;  // Book is initially available
    (*bookCount)++;
    printf("Book added successfully.\n");
}
void searchByTitle(struct Book library[], int bookCount, char title[]) {
    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].title, title) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("ISBN: %s\n", library[i].ISBN);
            printf("Publication Year: %d\n", library[i].publicationYear);
            printf("Availability: %s\n", library[i].isAvailable ? "Available" : "Checked Out");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}
void searchByAuthor(struct Book library[], int bookCount, char author[]) {
    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].author, author) == 0) {
            printf("Book found:\n");
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("ISBN: %s\n", library[i].ISBN);
            printf("Publication Year: %d\n", library[i].publicationYear);
            printf("Availability: %s\n", library[i].isAvailable ? "Available" : "Checked Out");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}
void updateAvailability(struct Book library[], int bookCount, char ISBN[], int status) {
    int found = 0;
    for (int i = 0; i < bookCount; i++) {
        if (strcmp(library[i].ISBN, ISBN) == 0) {
            library[i].isAvailable = status;
            printf("Book availability status updated.\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}

int main() {
    struct Book library[MAX_BOOKS];
    int bookCount = 0;
    int choice;
    char searchQuery[100];
    char ISBN[20];

    while (1) {
        printf("\nLibrary Menu:\n");
        printf("1. Add a new book\n");
        printf("2. Search for a book by title\n");
        printf("3. Search for a book by author\n");
        printf("4. Update book availability status\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(library, &bookCount);
                break;
            case 2:
                printf("Enter the title to search: ");
                scanf(" %[^\n]", searchQuery);
                searchByTitle(library, bookCount, searchQuery);
                break;
            case 3:
                printf("Enter the author to search: ");
                scanf(" %[^\n]", searchQuery);
                searchByAuthor(library, bookCount, searchQuery);
                break;
            case 4:
                printf("Enter the ISBN of the book: ");
                scanf(" %s", ISBN);
                printf("Enter the availability status (1 for available, 0 for checked out): ");
                int status;
                scanf("%d", &status);
                updateAvailability(library, bookCount, ISBN, status);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
