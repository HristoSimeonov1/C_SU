#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

typedef struct {
    char name[50];
    char author[50];
    float price;
} Book;
void print_books_by_author(Book *library, int size, char target_author[]);
int main(){

    Book library[3] = {
        {"The Great Gatsby", "F. Scott Fitzgerald", 10.99},
        {"To Kill a Mockingbird", "Harper Lee", 8.99},
        {"1984", "George Orwell", 9.99}
    };

    print_books_by_author(library, 3, "Harper Lee");
    print_books_by_author(library, 3, "J.K. Rowling");

    return 0;
}
void print_books_by_author(Book library[], int size, char target_author[]) {
    int found = 0; // Създаваме брояч ПРЕДИ цикъла

    // 1. Първо преглеждаме абсолютно всички книги
    for(int i = 0; i < size; i++) {
        if (strcmp(library[i].author, target_author) == 0) {
            printf("Book: %s, Author: %s, Price: %.2f\n", library[i].name, library[i].author, library[i].price);
            found++; // Ако намерим книга, увеличаваме брояча
        }
    }

    // 2. Чак след като цикълът свърши, проверяваме дали изобщо сме намерили нещо
    if (found == 0) {
        printf("No books found by author: %s\n", target_author);
    }
}