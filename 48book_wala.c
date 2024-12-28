#include <stdio.h>
#include <string.h>


struct Book {
    char author[100];
    char bookName[100];
    float price;
};


void displayBook(struct Book book) {
    printf("Book Name: %s\n", book.bookName);
    printf("Author: %s\n", book.author);
    printf("Price: %.2f\n", book.price);
    printf("------------------------------\n");
}

int main() {
    struct Book books[5];   
    int i;
    struct Book highestPriceBook;  
    highestPriceBook.price = 0;  

    
    for (i = 0; i < 5; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        
        printf("Enter book name: ");
        getchar();  
        fgets(books[i].bookName, sizeof(books[i].bookName), stdin);  
        
        printf("Enter author name: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);  
        
        printf("Enter book price: ");
        scanf("%f", &books[i].price);

        
        books[i].bookName[strcspn(books[i].bookName, "\n")] = '\0';
        books[i].author[strcspn(books[i].author, "\n")] = '\0';

        
        if (books[i].price > highestPriceBook.price) {
            highestPriceBook = books[i];
        }
    }

    
    printf("\nBooks Information:\n");
    for (i = 0; i < 5; i++) {
        displayBook(books[i]);
    }

    
    printf("\nBook with the highest price:\n");
    displayBook(highestPriceBook);

    return 0;
}
